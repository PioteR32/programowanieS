// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb� dodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry wylosuje liczb� a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczb�:\n";
			std::cin >> numberFromUser;
			//...
		}
	}*/

	do
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du�a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma�a liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!!\n";

}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <1,x>.
//Gdzie x pdaje u�ytkownika.
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	long long upperRange;
	std::cout << "Podaj  zakres kt�ry nie jest r�wny 0\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if (upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//.....
			}
		}
	}
	*/
	long long currentNumber = 0;
	if (upperRange >= 0) {
		do
		{
			currentNumber++;
			std::cout << currentNumber << ", ";
		} while (upperRange > currentNumber);
	}
	else
	{
		do
		{

			currentNumber = currentNumber - 1;
			std::cout << currentNumber << ", ";
		} while (upperRange < currentNumber);
	}

}


void task5()
{
	int number, sum, rest;
	sum = 0;
	std::cout << " Podaj liczb�";
	cin >> number;
	do {
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;

	} while (sum != 0);
	cout << " suma liczby to" << sum;
}
void task6()
{
	int number, i;
	double sum = 0;
	i = 0;
	do
	{
		std::cout << " Podaj liczb�";
		cin >> number;
		i++;
		sum += number;
	} while (number != 0);
	std::cout << " Suma liczb = " << sum;
	std::cout << " �rednia arytmetyczna  = " << sum / i;
}
// Napisz program kt�ry obliczy i wy�wietli liczb� cyfr
void task7()
{
	int number, numberOfDigits;
	numberOfDigits = 0;
	std::cout << " Podaj liczb� \n";
	cin >> number;
	do {
		number = number / 10;
		numberOfDigits++;

	} while (number != 0);
	
	cout << "Liczba cyfr to " << numberOfDigits;

}
	int main()
{
	task7();

}