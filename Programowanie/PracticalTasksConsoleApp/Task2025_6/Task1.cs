using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2025_6
{
    public class Task1
    {
        public static void Task()
        {
            Odkurzacz odkurzacz = new Odkurzacz();
            Pralka pralka = new Pralka();
            Console.WriteLine("Podaj numer prania 1..12");
            pralka.SetProgramPrania(int.Parse(Console.ReadLine()));
            odkurzacz.On();
            odkurzacz.On();
            odkurzacz.On();
            odkurzacz.WyswietlKomunikat("odkurzacz się wyładował");
            odkurzacz.Off();
        }
    }
}
