using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2023_06
{
    public class Film
    {
        protected string tytul;
        protected int iloscWypozyczen;
        public Film()
        {
            tytul = null;
            iloscWypozyczen = 0;
        }
        public void SetTytul(string tytul)
        {
            this.tytul = tytul;
        }
        public string GetTytul()
        {
           return tytul;
        }
        public int GetIloscWypozyczen()
        {
           return iloscWypozyczen;
        }

        public void InkrementowanieWypozyczen()
        {
            iloscWypozyczen++;
        }

        public void WyświetlPola()
        {
            Console.WriteLine($"Tytuł {tytul} Ilosć wypozyczeń {iloscWypozyczen}")
        }
    }
}
