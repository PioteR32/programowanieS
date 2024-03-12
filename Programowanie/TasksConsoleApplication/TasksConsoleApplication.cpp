

#include <iostream>
using namespace std;
/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.

Instrukcje:

Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie

Wybierz operacjê (1/2/3/4): 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3

Wynik mno¿enia: 15
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
				cout << " nie mo¿esz dzieliæ przez zero \n";
				return;
			}
	else
	{
		cout << "Niepoprawny znak \n";
		return;
	}
	cout << "wynik jest równy : " << result << "\n";
}
void calculator()
{
	while (true)
	{
		long double* firstNumber = new long double;
		cout << "Podaj pierwsz¹ liczbê\n";
		cin >> *firstNumber;

		long double* secondNumber = new long double;
		cout << "Podaj drug¹ liczbê\n";
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