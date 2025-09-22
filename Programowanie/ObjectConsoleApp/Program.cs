using ObjectConsoleApp;

PointStruct firstPointStruct;
firstPointStruct.x = 5;
firstPointStruct.y = 6;

Console.WriteLine($"firstPointStruct {firstPointStruct}");
PointStruct firstPointStruct2 = firstPointStruct;

Console.WriteLine($"firstPointStruct {firstPointStruct}");
Console.WriteLine($"firstPointStruct2 {firstPointStruct2}");

void Parv1(PointStruct pointStruct)
{
    Console.WriteLine($"firstPointStruct {pointStruct}");
    pointStruct.x = 99;
    Console.WriteLine($"firstPointStruct {pointStruct}");
}

void Parv2(ref PointStruct pointStruct)
{
    Console.WriteLine($"firstPointStruct {pointStruct}");
    pointStruct.x = 99;
    Console.WriteLine($"firstPointStruct {pointStruct}");
}

void Parv3(ref PointClass pointClass)
{
    Console.WriteLine($"firstPointStruct {pointClass}");
    
    pointClass = new PointClass();
    pointClass.x = 79;
      
    Console.WriteLine($"firstPointStruct {pointClass}");
}
void Parv4(ref PointClass pointClass)
{
    Console.WriteLine($"firstPointStruct {pointClass}");

    pointClass = new PointClass();
    pointClass.x = 199;

    Console.WriteLine($"firstPointStruct {pointClass}");
}

Parv1(firstPointStruct);
Console.WriteLine($"firstPointStruct {firstPointStruct}");

Parv2(ref firstPointStruct);
Console.WriteLine($"firstPointStruct {firstPointStruct}");

PointClass firstPointClass = new PointClass();
firstPointClass.x = 15;
firstPointClass.y = 99;

Console.WriteLine($"firstPointClass {firstPointClass}");

PointClass secondPointClass = firstPointClass;
secondPointClass.x = 29;

Console.WriteLine($"firstPointClass {firstPointClass}");
Console.WriteLine($"secondPointClass {secondPointClass}");

Parv3(ref firstPointClass);

Console.WriteLine($"firstPointClass {firstPointClass}");
Console.WriteLine($"secondPointClass {secondPointClass}");
