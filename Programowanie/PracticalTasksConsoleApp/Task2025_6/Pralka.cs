using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2025_6
{
    public class Pralka : Urzadzenie
    {
        private int programPrania;
        public Pralka()
        {
            programPrania = 0;
        }
        public int SetProgramPrania(int programPrania)
        {
            if (programPrania < 1 || programPrania > 12)
            {
                WyswietlKomunikat("Podano niepoprawny numer");
                this.programPrania = 0;
            }
            else
            {
                WyswietlKomunikat("Program został ustawiony");
                this.programPrania = programPrania;
            }
           
            return this.programPrania;
        }
    }
}
