using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2022_06
{
    public class Task1
    {
        public static void Task()
        {
            Console.WriteLine($"Ilość zarejestrowanych osób  {Osoba.numberOfCreatedClass}");
            Osoba osobaKonstruktorBezparametrowy = new ();
            Console.WriteLine($"Podaj id osoby");
            int id = int.Parse(Console.ReadLine());
            Console.WriteLine("Podaj imię osoby");
            string  imie = Console.ReadLine();
            Osoba osobaKonstruktorDwuparametrowy = new(id, imie);
            Osoba osobaKonstruktorKopiujacy = new(osobaKonstruktorDwuparametrowy);
            Console.WriteLine($"Ilość zarejestrowanych osób  {Osoba.numberOfCreatedClass}");
        }
    }
}
