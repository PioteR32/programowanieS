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
            int a, b;
            try
            {
                Console.WriteLine("Podaj a");
                a = int.Parse(Console.ReadLine());
                Console.WriteLine("Podaj b");
                b = int.Parse(Console.ReadLine());
                if (a < 0)
                {
                    Console.WriteLine("a musi być większe od zera");
                    return;
                }
                if (b < 0)
                {
                    Console.WriteLine("b musi większe od zera");
                    return;
                }
            }
            catch (FormatException exception)
            {
                Console.WriteLine("Złe typy zmiennnych");
                return;
            }
            catch (OverflowException exception)
            {
                Console.WriteLine("Zbyt duże liczby");
                return;
            }

            Console.WriteLine(NWD(a, b));
        }
        //**************************
        //nazwa funkcji: NWD()
        //opis funkcji: liczy NWD dwóch liczb
        //parametry: a - jedna liczba 
        //           b - druga liczba
        //zwracany typ i opis: zwraca a czyli NWD
        //autor: 01234567890
        //**************************
        public static int NWD(int a, int b)
        {
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            return a;
        }
    }
}
