// MaturaTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <xstring>
#include <string>
using namespace std;

int main()
{
	ifstream plik = ifstream("liczby.txt");
	vector<int > numbers = vector<int>();
	vector<int> reversed = vector<int>();
	vector<int> negativeNumbers = vector<int>();
	const int MAX_PRIME_NUMBER = 5000;
	if (plik.is_open())
	{
		int addingNumber;
		while (plik >> addingNumber)
		{
			numbers.push_back(addingNumber);
		}

		// zad 4.1
		std::cout << "zad 4.1\n";

		for (int number : numbers)
		{
			vector<int> digits = vector<int>();
			do
			{
				digits.push_back(number % 10);
				number /= 10;
			} while (number != 0);

			int power = digits.size() - 1;
			int tmp = 0;

			for (int num : digits)
			{
				tmp += num * pow(10, power);
				power--;
			}

			reversed.push_back(tmp);
			if (tmp % 17 == 0)
				std::cout << to_string(tmp) + "\n";
		}
		
		// zad 4.2
		std::cout << "zad 4.2\n";

		for (int i = 0; i < reversed.size(); i++)
		{
			if (numbers[i] - reversed[i] < 0)
			{
				negativeNumbers.push_back(-(numbers[i] - reversed[i]));
			}
			else
				negativeNumbers.push_back((numbers[i] - reversed[i]));
		}

		int position = 0;
		for (int i = 0; i < negativeNumbers.size(); i++)
		{
			if (negativeNumbers[i] > negativeNumbers[position])
			{
				position = i;
			}
		}
		std::cout << to_string(numbers[position]) + " " + to_string(negativeNumbers[position]) + "\n";

		//zad 4.3
		cout << "zad 4.3\n";

		vector<int> positionsOfPrimeNumbers;
		vector<int> primeNumbers;
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
		for (int i = 1; i < reversed.size(); i++)
		{
			for (int primeNumber : primeNumbers)
			{
				if (primeNumber > reversed[i] / 2 && primeNumber > numbers[i] / 2)
				{
					positionsOfPrimeNumbers.push_back(i);
					break;
				}
				if (primeNumber < reversed[i] / 2)
				{
					if (reversed[i] % primeNumber == 0)
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
		for (int position : positionsOfPrimeNumbers)
			cout <<  to_string(numbers[position]) + "\n";

		//zad 4.4
		cout << "zad 4.4\n";

		// numberOfReapetedNumbers[0] = Number of numbers repeated once
		// numberOfReapetedNumbers[1] = Number of numbers repeated twice
		// numberOfReapetedNumbers[2] = Number of numbers repeated third
		int numberOfReapetedNumbers[3] = { 0,0,0 };
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

		cout << to_string(numberOfReapetedNumbers[0] + numberOfReapetedNumbers[1] + numberOfReapetedNumbers[2]) + " " + to_string(numberOfReapetedNumbers[1]) + " " + to_string(numberOfReapetedNumbers[2]) + " ";
	}
}
