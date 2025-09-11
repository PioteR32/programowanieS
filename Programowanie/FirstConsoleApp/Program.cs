
Console.Write("Hello, World!\n");
Console.WriteLine("Hello, World!");
string name = "JAn";
string surname = "Kowalski";
Console.WriteLine($"{name } {surname}");
Console.WriteLine(@"PATH\PATH");
void ParTest(object t)
{
    int tmp = int.Parse(t.ToString());
    tmp++;
    t = tmp;
    Console.WriteLine($"{tmp}");
}

void ParTest1(out int  t)
{

    t = 15;
    Console.WriteLine($"{t}");
}
int t = 90;

ParTest(t);
Console.WriteLine(t);