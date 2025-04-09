using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DoZapełnianiaDyskow
{
    public class MyDisk
    {
        static int numberOfFiles = 3000;
        static int numberOfFolders = 100;
        static List<string> names = new List<string>();
        static string mainString = string.Empty;
        public static string mainFileName = "mainFile";
        public static string mainFolderName = "mainFolder";
        static double theBestMainFileSizeToDiskFileSize = 0.03;
        string driveName = string.Empty;    
        string globalPath = string.Empty;
        string mainFolderPath = string.Empty;
        DriveInfo driveInfo;

       
        long diskFreeSpaceOnStart;
        long weightOfFolder;
        long mainFileSize;

        string mainFilePath = string.Empty;
        public MyDisk(string globalPath)
        {
            this.globalPath = globalPath.ToString().Substring(0, 3);
            driveInfo = new DriveInfo(this.globalPath);
            diskFreeSpaceOnStart = driveInfo.TotalFreeSpace / 1024 / 1024 / 1024;
            mainFilePath = this.globalPath + mainFolderName + @"\" + mainFileName + ".txt";
            mainFolderPath = this.globalPath + mainFolderName;
            weightOfFolder = diskFreeSpaceOnStart;
            mainFileSize = (long)(theBestMainFileSizeToDiskFileSize * (double)weightOfFolder);
            driveName = this.globalPath;
        }
        public void SetAllDiskMemory()
        {
            if (!Directory.Exists(mainFolderPath))
            {
                Directory.CreateDirectory(mainFolderPath);
            }
            CreateMainFile();

            Thread thread = new Thread(new ParameterizedThreadStart(CreateFolders));
            thread.Start(globalPath + mainFolderName + @"\" + names[1]);
            thread.Join();
            int i = 0;
        }

         void CreateMainFile()
         {
            FileInfo fileInfo = new FileInfo(mainFilePath);

            StreamWriter streamWriter = new StreamWriter(mainFilePath, false);
            for (int i = 0; fileInfo.Length / 1024 / 1024/1024 <= mainFileSize; ++i)
            {
                fileInfo = new FileInfo(mainFilePath);
                long tmp = fileInfo.Length / 1024 / 1024/1024;
                long tmp1 = mainFileSize * 1024;
                streamWriter.Write(mainString);
            }
            streamWriter.Close();
        }
        public static void CreateMainString()
        {
            try
            {
                for (int i = 0; i < names.Count / 2; i++)
                {
                    mainString += names[i];
                }
                for (int j = 0; j < 100000; j++)
                {
                    mainString += mainString;
                }
            }
            catch
            {
            }
        }
        void CreateFolders(object mainPath)
        {
            DriveInfo drive = new DriveInfo(driveName);
            for (int i = 0; i < names.Count; i++)
            {
                drive = new DriveInfo(driveName);
                if (drive.AvailableFreeSpace / 1024 / 1024 / 1024 <= diskFreeSpaceOnStart - weightOfFolder)
                {
                    return;
                }
                Thread thread = new Thread(new ParameterizedThreadStart(CreateFiles));
                thread.Start(mainPath as string + @"\" + names[i]);
            }
        }
        void CreateFiles(object path)
        {
            if (!Directory.Exists(path as string))
            {
                DriveInfo drive = new DriveInfo(driveName);
                Directory.CreateDirectory(path as string);
                for (int i = 0; i < names.Count; i++)
                {
                    drive = new DriveInfo(driveName);
                    if (drive.AvailableFreeSpace / 1024 / 1024 / 1024 <= diskFreeSpaceOnStart - weightOfFolder)
                    {

                        return;
                    }
                    try
                    {
                        File.Copy(mainFilePath, path as string + @"\" + names[i]);
                    }
                    catch { }
                }
            }
            Thread threadd = new Thread(new ParameterizedThreadStart(CreateFolders));
            threadd.Start(path as string);

        }

        public static string CreateString()
        {
            Random random = new Random();
            int tmp = 15;/*random.Next(8, 15);*/
            string str = string.Empty;
            for (int i = 0; i < tmp; i++)
            {
                char c = (char)(random.Next((int)'a', (int)'z'));
                str += c.ToString();
            }
            return str;
        }

        public static void CreateNames()
        {
            for (int i = 0; i < numberOfFiles; i++)
            {
                names.Add(CreateString());
            }
        }
    }
}
