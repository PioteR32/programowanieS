
#include <iostream>
using namespace std;
//Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task1()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	while(number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Suma " << sum << "\n";
	//4125
}

//Napisz program, który policzy NWD dwóch liczb.
void task2()
{

	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> secondNumber;

	int nwd;
	/*
	if (firstNumber < secondNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;
	*/
	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

	/*
	if (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
=======
	int numberOfUser, firstNumber,nwd;
	std::cout << " Podaj liczb�";
	cin >> numberOfUser;
	std::cout << " Podaj liczb�";
	cin >> firstNumber;
	nwd = numberOfUser < firstNumber ? numberOfUser : firstNumber;

	while (numberOfUser != 0
		|| firstNumber != 0)
>>>>>>> d6ab3fd0fff5f5321b13253f049c5f4dead52582
	{
		nwd--;
		if (secondNumber % nwd != 0
			|| firstNumber % nwd != 0)
		{
			nwd--;
			if (secondNumber % nwd != 0
				|| firstNumber % nwd != 0)
			{
				nwd--;
				//if...
			}
		}
	}
	*/

	//wersja 1
	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		--nwd;
	}

	std::cout << "NWD = " << nwd << "\n";

	//wersja 2
	nwd = 1;
	int dividend = 2;
	int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
	while (tmpFirstNumber >= dividend
		&& tmpSecondNumber >= dividend)
	{
		if (tmpFirstNumber % dividend == 0
			&& tmpSecondNumber % dividend == 0)
		{
			tmpFirstNumber = tmpFirstNumber / dividend;
			tmpSecondNumber /= dividend;
			nwd *= dividend;
		}
		else
			dividend++;
	}
	std::cout << "NWD = " << nwd << "\n";

	//wersja 3
	//NWD(a, b) = a				jeśli b = 0
	//NWD(a, b) = NWD(b, a % b) jeśli b != 0
	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	nwd = a;
	std::cout << "NWD = " << nwd << "\n";
}

//Sprawdzanie czy liczba jest palindromem.
void task3()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	//wersja 1

	//obliczam ilość cyfr
	int tmpNumber = number;
	int numberOfDigit = 0;
	while (tmpNumber != 0)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczę 10 do potęgi numberOfDigit - 1
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}
	int sprawdzam = 0;
	int sprawdzam1 = 0;
	int leftrest = 100;
	int rightrest = 100;
	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;
	int leftFirstNumber = leftNumber;
	while (leftDivided >= 1)
	{
		sprawdzam++;
		sprawdzam1++;
		leftNumber = leftFirstNumber;
		leftNumber /= leftDivided;
		leftrest = leftNumber % 10;
		leftDivided /= 10;
		rightrest = rightNumber % 10;
		rightNumber /= 10;

		if (rightrest != leftrest)
		{
			sprawdzam1++;
			break;
		}
		else;
	}
	if (sprawdzam == sprawdzam1)
		cout << "liczbq jest palindromem";
	else
		cout << "liczba nie  jest palindromem";
}
	void tas3k()
	{
		int numberOfUser, nwd, firstNumber, dividend = 1;
		std::cout << " Podaj liczb�";
		cin >> numberOfUser;
		std::cout << " Podaj liczb�";
		cin >> firstNumber;
		nwd = 1;
		while (numberOfUser >= dividend
			&& firstNumber >= dividend)
		{
			if (firstNumber % dividend == 0
				&& numberOfUser % dividend == 0)
			{
				firstNumber /= dividend;
				numberOfUser /= dividend;
				nwd *= dividend;
			}
			else
				dividend++;
		}
		cout << " NWD = " << nwd << "\n";
	}

	void task4()
	{
		int a, nwd, b, dividend = 1;
		std::cout << " Podaj liczb�";
		cin >> a;
		std::cout << " Podaj liczb�";
		cin >> b;
		nwd = 1;
		while (b != 0)
		{
			int tmpA = a;
			a = b;
			b = tmpA % b;

		}
	}
	
	

int main()
{
	task3();
}