using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Styczeń2023_1Mobilna
{
    //*******************************************
    //klasa: Notatka
    //opis: reprezentuje notatkę
    //pola: iloscNotatek - przechowuje ilość notatek
    //      id - przechowuje id notatki
    //      tytuł - przechowuje tytuł notatki
    //      notatka - przechowuje treść notatki
    //autor: 01234567890
    public class Notatka
    {
        static int iloscNotatek;
        int id;
        string tytul;
        string notatka;
        public Notatka(string tytul, string notatka)
        {
            iloscNotatek++;
            this.id = iloscNotatek;
            this.tytul = tytul;
            this.notatka = notatka;
        }
        public void WyswietlNotatke() => Console.WriteLine($"tytuł: {tytul}\n{notatka}");
        public void Diagnostyczna() => Console.WriteLine($"{iloscNotatek};{id};{tytul};{notatka}");
    }
}
