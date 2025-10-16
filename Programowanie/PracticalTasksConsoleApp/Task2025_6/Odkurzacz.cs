using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.Task2025_6
{
    public class Odkurzacz:Urzadzenie
    {
        bool jestWłaczony;
        public void On()
        {
            if (!jestWłaczony)
                WyswietlKomunikat("Odkurzacz włączono");
            jestWłaczony = true;
        }

        public void Off()
        {
            if (jestWłaczony)
                WyswietlKomunikat("Odkurzacz wyłączono");
            jestWłaczony = false;
        }
    }
}
