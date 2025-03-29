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
	vector<int> notminus0Numbers = vector<int>();

	if (plik.is_open())
	{
		int liczbaDodawana;
		while (plik >> liczbaDodawana)
		{
			numbers.push_back(liczbaDodawana);
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
		cout << "zad 4.2\n";

		for (int i = 0; i < reversed.size(); i++)
		{
			if (numbers[i] - reversed[i] < 0)
			{
				notminus0Numbers.push_back(-(numbers[i] - reversed[i]));
			}
			else
				notminus0Numbers.push_back((numbers[i] - reversed[i]));
		}

		int position = 0;
		for (int i = 0; i < notminus0Numbers.size(); i++)
		{
			if (notminus0Numbers[i] > notminus0Numbers[position])
			{
				position = i;
			}
		}
		std::cout << to_string(numbers[position]) + " " + to_string(notminus0Numbers[position]) + "\n";

		//zad 4.3
		cout << "zad 4.3\n";

		vector<int> positions;
		vector<int> firstsNumber;
		int number = 1;

		while (number < 5000)
		{
			number += 1;
			bool isFirst = true;
			for (int num : firstsNumber)
			{
				if (number % num == 0)
				{
					isFirst = false;
					break;
				}
			}
			if (isFirst)
			{
				firstsNumber.push_back(number);
			}
		}
		for (int i = 1; i < reversed.size(); i++)
		{
			for (int firstNumber : firstsNumber)
			{
				if (firstNumber > reversed[i] / 2 && firstNumber > numbers[i] / 2)
				{
					positions.push_back(i);
					break;
				}
				if (firstNumber < reversed[i] / 2)
				{
					if (reversed[i] % firstNumber == 0)
					{
						break;
					}
				}
				if (firstNumber < numbers[i] / 2)
					if (numbers[i] % firstNumber == 0)
					{
						break;
					}
			}
		}
		for (int position : positions)
			cout <<  to_string(numbers[position]) + "\n";

		//zad 4.4
		cout << "zad 4.4\n";

		// sumNumbers[0] = Number of numbers repeated once
		// sumNumbers[1] = Number of numbers repeated twice
		// sumNumbers[2] = Number of numbers repeated third
		int sumNumbers[3] = { 0,0,0 };
		int i = 0;
		for (int number : numbers)
		{
			int numberOfNum = 0;
			for (int num : numbers)
			{
				if (num == number)
					numberOfNum++;
			}
			sumNumbers[numberOfNum - 1]++;
			i++;
		}

		sumNumbers[1] /= 2;
		sumNumbers[2] /= 3;

		cout << to_string(sumNumbers[0] + sumNumbers[1] + sumNumbers[2]) + " " + to_string(sumNumbers[1]) + " " + to_string(sumNumbers[2]) + " ";
	}
}
