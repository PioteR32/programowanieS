
using System.Runtime.InteropServices.Marshalling;

Console.Write("Hello, World!\n");
Console.WriteLine("Hello, World!");
string name = "JAn";
string surname = "Kowalski";
Console.WriteLine($"{name } {surname}");
Console.WriteLine(@"PATH\PATH");

void ParTest1(out int  t)
{

    t = 15;
    Console.WriteLine($"{t}");   
}
int t = 90;

ParTest(ref t);
Console.WriteLine(t);

void ParTest(ref int tt)
{
    Console.WriteLine($"{t}");
}

ParTest1(out int newTT);
Console.WriteLine(newTT);
