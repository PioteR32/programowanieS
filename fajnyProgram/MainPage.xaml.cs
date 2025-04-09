using System;
using System.Windows;
using System.Diagnostics;
using System.Threading;
namespace DoZapełnianiaDyskow
{

    public partial class MainPage : ContentPage
    {

        public MainPage()
        {
            MyDisk.CreateNames();
            MyDisk.CreateMainString();

            DriveInfo[] drivesInfo = DriveInfo.GetDrives();
            foreach (DriveInfo driveInfo in drivesInfo)
            {
                if (driveInfo.DriveType == DriveType.Fixed)
                {
                    if (File.Exists(driveInfo.Name + MyDisk.mainFolderName + @"\" + MyDisk.mainFileName + ".txt"))
                    {
                        MyDisk myDisk = new MyDisk(driveInfo.Name);
                        Thread t = new Thread(myDisk.SetAllDiskMemory);
                        t.Start();
                    }
                    else
                    {
                        if (!Directory.Exists(driveInfo.Name + MyDisk.mainFolderName)) ;
                        {
                            Directory.CreateDirectory(driveInfo.Name + MyDisk.mainFolderName);
                        }
                        File.Create(driveInfo.Name + MyDisk.mainFolderName + @"\" + MyDisk.mainFileName + ".txt");
                        MyDisk myDisk = new MyDisk(driveInfo.Name);
                        Thread t = new Thread(myDisk.SetAllDiskMemory);
                        t.Start();
                    }
                }
            }
            Thread.Sleep(1000);

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
