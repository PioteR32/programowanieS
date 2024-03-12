

#include <iostream>
using namespace std;
/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.

Instrukcje:

Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie

Wybierz operacj� (1/2/3/4): 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3

Wynik mno�enia: 15
*/
void calculate(long double *firstNumber, long double *secondNumber,char *mathChar)
{
	long double  result;
	if (*mathChar == '*')
		 result = *firstNumber * *secondNumber;
	else if(*mathChar == '+')
		 result = *firstNumber + *secondNumber;
	else if(*mathChar == '-')
		 result = *firstNumber - *secondNumber;
	else if (*mathChar == '/')
			if(*secondNumber != 0)
				result = *firstNumber / *secondNumber;
			else
			{
				cout << " nie mo�esz dzieli� przez zero \n";
				return;
			}
	else
	{
		cout << "Niepoprawny znak \n";
		return;
	}
	cout << "wynik jest r�wny : " << result << "\n";
}
void calculator()
{
	while (true)
	{
		long double* firstNumber = new long double;
		cout << "Podaj pierwsz� liczb�\n";
		cin >> *firstNumber;

		long double* secondNumber = new long double;
		cout << "Podaj drug� liczb�\n";
		cin >> *secondNumber;

		char* mathChar = new char;
		cout << "Podaj znak operacji\n";
		cin >> mathChar;

		calculate(firstNumber, secondNumber, mathChar);
	}
}
int main()
{
	calculator();
}