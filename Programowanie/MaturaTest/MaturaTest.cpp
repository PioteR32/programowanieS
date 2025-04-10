// MaturaTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <xstring>
#include <string>
using namespace std;
ifstream plik = ifstream("przyklad.txt");
vector<int > numbers = vector<int>();
vector<int> reversedNumbers = vector<int>();
vector<int> absoluteNumbers = vector<int>();
vector<int> positionsOfPrimeNumbers;
vector<int> primeNumbers;

const int MAX_PRIME_NUMBER = 5000;
void ReversingNumber()
{
	for (int number : numbers)
	{
		vector<int> digits = vector<int>();
		do
		{
			digits.push_back(number % 10);
			number /= 10;
		} while (number != 0);

		int power = digits.size() - 1;
		int reversedNumber = 0;

		for (int num : digits)
		{
			reversedNumber += num * pow(10, power);
			power--;
		}

		reversedNumbers.push_back(reversedNumber);
		if (reversedNumber % 17 == 0)
			std::cout << to_string(reversedNumber) + "\n";
	}
}

void SetAbsoluteNumbers()
{
	for (int i = 0; i < reversedNumbers.size(); i++)
	{
		if (numbers[i] - reversedNumbers[i] < 0)
		{
			absoluteNumbers.push_back(-(numbers[i] - reversedNumbers[i]));
		}
		else
			absoluteNumbers.push_back((numbers[i] - reversedNumbers[i]));
	}
}

void GeneratePrimeNumbers()
{
	int number = 1;
	while (number < 5000)
	{
		number += 1;
		bool isFirst = true;
		for (int primeNumber : primeNumbers)
		{
			if (number % primeNumber == 0)
			{
				isFirst = false;
				break;
			}
		}
		if (isFirst)
		{
			primeNumbers.push_back(number);
		}
	}
}

void FindPrimeNumbers()
{
	for (int i = 0; i < reversedNumbers.size(); i++)
	{
		for (int primeNumber : primeNumbers)
		{
			if (primeNumber > reversedNumbers[i] / 2 && primeNumber > numbers[i] / 2)
			{
				positionsOfPrimeNumbers.push_back(i);
				break;
			}
			if (primeNumber < reversedNumbers[i] / 2)
			{
				if (reversedNumbers[i] % primeNumber == 0)
				{
					break;
				}
			}
			if (primeNumber < numbers[i] / 2)
				if (numbers[i] % primeNumber == 0)
				{
					break;
				}
		}
	}
}

void PrintFindedNumbers()
{
	for (int position : positionsOfPrimeNumbers)
		cout << to_string(numbers[position]) + "\n";
}
//numberOfReapetedNumbers[3] a table to which the number of repeated numbers is written
void SetReapetedNumbers(int numberOfReapetedNumbers[3])
{
	/*int numberOfReapetedNumbers[3] = { 0,0,0 };*/
	int i = 0;
	for (int number : numbers)
	{
		int numberOfNum = 0;
		for (int num : numbers)
		{
			if (num == number)
				numberOfNum++;
		}
		numberOfReapetedNumbers[numberOfNum - 1]++;
		i++;
	}

	numberOfReapetedNumbers[1] /= 2;
	numberOfReapetedNumbers[2] /= 3;
}

int main()
{

	if (plik.is_open())
	{
		int addingNumber;
		while (plik >> addingNumber)
		{
			numbers.push_back(addingNumber);
		}

		// zad 4.1
		std::cout << "zad 4.1\n";
		ReversingNumber();
		
		// zad 4.2
		std::cout << "zad 4.2\n";

		SetAbsoluteNumbers();
		int position = 0;
		for (int i = 0; i < absoluteNumbers.size(); i++)
		{
			if (absoluteNumbers[i] > absoluteNumbers[position])
			{
				position = i;
			}
		}
		std::cout << to_string(numbers[position]) + " " + to_string(absoluteNumbers[position]) + "\n";

		//zad 4.3
		cout << "zad 4.3\n";

		GeneratePrimeNumbers();
		FindPrimeNumbers();
		PrintFindedNumbers();
		//zad 4.4
		cout << "zad 4.4\n";

		// numberOfReapetedNumbers[0] = Number of diffrent numbers
		// numberOfReapetedNumbers[1] = Number of numbers repeated twice
		// numberOfReapetedNumbers[2] = Number of numbers repeated third
		int numberOfReapetedNumbers[3] = { 0,0,0 };
		SetReapetedNumbers(numberOfReapetedNumbers);

		cout << to_string(numberOfReapetedNumbers[0] + numberOfReapetedNumbers[1] + numberOfReapetedNumbers[2]) + " " + to_string(numberOfReapetedNumbers[1]) + " " + to_string(numberOfReapetedNumbers[2]) + " ";
	}
}
