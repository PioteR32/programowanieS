

#include <iostream>
using namespace std;
/*
operatory warunkowe:
- WIĘKSZE  >
- MNIEJSZE <
- MNIEJSZE LUB RÓWNE <=
- WIĘKSZE LUB RÓWNE >= 
- RÓWNE ==
- NIE RÓWNE !=

*/
void task1()
{
	
	double firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber < 0)
	{
		cout << "\n Liczba ujemna";
	}

	if (firstNumber > 0)
	{
		cout << " \n Liczba dodatnia";
	}

	if (firstNumber == 0)
	{
		cout << "\n Liczba równa 0";
	}


}





void task2()
{

	int firstNumber, rest;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	rest = firstNumber % 2;
	if (rest == 0)
	{
		cout << "\n Liczba parzysta";
	}

	if (firstNumber != 0)
	{
		cout << " \n Liczba nieparzysta";
	}

	// pełna instrukcja if
	if (rest == 0)
	{
		cout << "\n Liczba parzysta";
	}
	else
	{
		cout << " \n Liczba nieparzysta";
		cout << " \n Liczba nieparzysta";
	}


	
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task2();
}

