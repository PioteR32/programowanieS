// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void task1()
{
	int howManyTimes;
	cout << "Podaj liczbę \n";
	cin >> howManyTimes;
	int i = 0;
	while (i != howManyTimes)
	{
		cout << "Hallo world\n";
		i++;
	}
}
// NAPISZ PROGRAM KTÓRY POJKAŻE LICZBY PARZYSTE DO DANEGO 
void task2()
{
	int howManyTimes;
	cout << "Podaj liczbę \n";
	cin >> howManyTimes;
	int i = 0;
	for(int i = 0; i <= howManyTimes; i += 2)
	{
		cout << i << "\n";	
	}
}


/*
* Program obliczający sumę liczb od 1 do 100
* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe cztery zwory:
	****       54321        121212        122333
	***        65432        212121        223334444
	**         76543        121212        333444455555
	*          87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Rozkład liczby na czynniki pierwsze
*/
//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int number = 0;
	cout << "Podaj liczbę \n";
	
	for (int i = 0; i != 101; i++)
	{
		number = number + i;

	}
	cout << number;
}
//Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{
	int number, sum = 0;
	cout << "Podaj liczbę \n";
	cin >> number;
	for (int i = 1; i != number ; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	if (number == sum)
	{
		cout << " liczba jest liczbą doskonałą";
	}

}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	int result = 1;
	for (int i = 1; i != 11; i++)
	{
		result = 1;
		result *= i * i;
		cout << result << '\n';
	}

}
//Program obliczający n!.
void task6()
{
	int number, result = 1;
	cout << "Podaj liczbę\n";
	cin >> number;
	for (int i = 1; i != number + 1; i++)
	{
		result *= i;
	}
	cout << result;
}
//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task7()
{
	for (int i = 1; i <= 10;i++ )
		cout << i << "!";
}
// Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.)
void task8() {
	int number = 1;
	for (int i = 1; number != 11; i++)
	{
		cout <<" "<< number<<" * "<< i <<" = "<<i * number << "\n";

		if (i == 10) 
		{
			i = 1;
			number++;
		}
	}
}
// Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	int number = 3;
	for (int i = 3; number <= 100; number += i)
	{
		
		cout << number <<"\n";
	}
}
// Program obliczający sumę kwadratów liczb od 1 do 10
void task10()
{
	int number = 0;
	for (int i = 1; i != 11; i++)
	{
		number = (i * i) + number;
		cout << number << " ";
	}
}
//* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task11()
{
	int number = 1, firstNumber = 0;
	for (int i = 0; i != 21; i++)
	{
		cout << firstNumber << "\n";
		cout << number << "\n";
		
		firstNumber += number;
		number += firstNumber;
	}

}

int main()
{
	task11();
}

