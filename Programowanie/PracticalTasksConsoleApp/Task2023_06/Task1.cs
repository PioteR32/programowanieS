using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2023_06
{
    public class Task1
    {
        public static void Task()
        {
            Film film = new Film();
            film.SetTytul("vsdvs");
            Console.WriteLine(film.GetTytul());
            Console.WriteLine(film.GetIloscWypozyczen());
            film.InkrementowanieWypozyczen();
            Console.WriteLine(film.GetIloscWypozyczen());
        }
    }
}



