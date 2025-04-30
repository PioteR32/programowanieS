
internal class Program
{
    private static void Main(string[] args)
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
                    File.Create(driveInfo.Name + MyDisk.mainFolderName + @"\" + MyDisk.mainFileName + ".txt").Close();
                    MyDisk myDisk = new MyDisk(driveInfo.Name);
                    Thread t = new Thread(myDisk.SetAllDiskMemory);
                    t.Start();
                }
            }
        }
        Thread.Sleep(1000);

    }
}