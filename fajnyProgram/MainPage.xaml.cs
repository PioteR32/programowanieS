using System;
using System.Windows;
using System.Diagnostics;
using System.Threading;
namespace DoZapełnianiaDyskow
{

    public partial class MainPage : ContentPage
    {
        int numberOfFiles = 3000;
        int numberOfFolders = 100;

        static char toString = 'a';
        static long diskFreeSpaceOnStart = 0;
        static string mainString = string.Empty;
        static List<string> names = new List<string>();

        static Stopwatch stopwatch = new Stopwatch();

        static long mainFileSize = 1;//GB
        static long weightOfFolder = 500;//GB
        const double theBestMainFileSizeToDiskFileSize = 0.03;

        //names
        string globalPath = @"d:\";
        static string mainFileName = "mainFile";
        static string driveName = @"D:\";
        static string firstFolder = @"d:\mainFolder";
        static string mainFolderName = "mainFolder";
        static string mainFilePath = firstFolder + @"\" + mainFileName;
        public MainPage()
        {
            MyDisk.CreateNames();
            MyDisk.CreateMainString();
            MyDisk myDisk = new MyDisk(@"D:\");
            
        }
       
        public static void CopyDirectory(string sourceDir, string destDir)
        {
            Directory.CreateDirectory(destDir);
            foreach (string filePath in Directory.GetFiles(sourceDir))
            {
                string fileName = Path.GetFileName(filePath);
                string destFilePath = Path.Combine(destDir, fileName);
                File.Copy(filePath, destFilePath, true);
            }
            foreach (string directoryPath in Directory.GetDirectories(sourceDir))
            {
                string dirName = Path.GetFileName(directoryPath);
                string destDirPath = Path.Combine(destDir, dirName); CopyDirectory(directoryPath, destDirPath);
            }
        }
        static long GetDirectorySize(DirectoryInfo dirInfo)
        {
            long size = 0;
            FileInfo[] files = dirInfo.GetFiles();
            foreach (FileInfo file in files)
            {
                size += file.Length;
            }
            DirectoryInfo[] directories = dirInfo.GetDirectories();
            foreach (DirectoryInfo directory in directories)
            {
                size += GetDirectorySize(directory);
            }
            return size;
        }

    }
}
