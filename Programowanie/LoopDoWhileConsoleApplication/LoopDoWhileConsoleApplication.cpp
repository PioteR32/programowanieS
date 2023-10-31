// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number;
	cout << " podaj liczbe \n";
	cin >> number;
	while (number < 0)
	{
		cout << " podaj liczbe dodatni¹  \n";
		cin >> number;

	}

}

void task2()
{
	int number;
	do
	{
		cout << " podaj liczbe \n";
		cin >> number;
	} while (number < 0);

	lekcjascout << " liczba jest dodatnia "


}

}
int main()
{

}

