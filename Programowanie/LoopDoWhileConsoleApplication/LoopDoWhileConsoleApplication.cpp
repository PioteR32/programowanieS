// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number;
	cout << " podaj liczbe \n";
	cin >> number;
	while (number < 0)
	{
		cout << " podaj liczbe dodatni�  \n";
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

