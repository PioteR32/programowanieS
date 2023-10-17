

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

operatory logiczne
&& - AND
|| - OR
! - NOT		                     Albo
XOR - nie w c++
a	b	a&&b	a||b	!a		a XOR b		
F   F	  F		F		T			F
F	T	  F		T		T			T
T	F	  F		T		F			T
T	T	  T		T		F			F		
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

	// sprawdź czy liczba jest z zakresu <-1,10)
void task3()
{
		
	int firstNumber ;
	
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber >= 1 && firstNumber < 10)
	{
		cout << " liczba jest z zakresu <1,10)";
	}
	else
	{
		if (firstNumber >= 10) 
		{
			cout << " liczba   jest większa od zakresu <1,10)";
		}
		else
		{
			cout << " liczba   jest mniejsza od zakresu <1,10)";
		}
	}
	// wersja druga
	

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber >= 1 && firstNumber < 10)
		cout << " liczba jest z zakresu <1,10)";
	else
		if (firstNumber >= 10)
			cout << " liczba   jest większa od zakresu <1,10)";
		else
			cout << " liczba   jest mniejsza od zakresu <1,10)";
		
	
}
// podziel dwie liczby
#include <string>
void task4()
 

{
	string a = " debilem";
	float firstNumber, secondNumber;

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> secondNumber;

	
	if (secondNumber == 0) 
	{
		cout << " Jesteś " << a << "nie dziel przez zero ty" << a;
	}
	
	else
	{
		float quoitent = firstNumber / secondNumber;
	}
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task3();
}

