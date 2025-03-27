// MaturaTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	ifstream plik = ifstream("przyklad.txt");
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
		for (int number : numbers)
		{
			vector<int> digits = vector<int>();
			do
			{
				int tmp = number % 10;
				number /= 10;
				digits.push_back(tmp);
			} while (number != 0);
			int power = digits.size() - 1;
			int tmp = 0;
			for (int num : digits)
			{
				tmp += num * pow(10, power);
				power--;
			}
			reversed.push_back(tmp);
		}
		for (int number : reversed)
		{
			if (number % 17 == 0)
				std::cout << number;
		}

		for (int i = 0; i < reversed.size(); i++)
		{
			if ( numbers[i] - reversed[i] < 0)
			{
				notminus0Numbers.push_back(-(numbers[i] - reversed[i]));
			}
			notminus0Numbers.push_back((numbers[i] - reversed[i]));
		}

		int theHighest = 0;
		for (int number : notminus0Numbers)
		{
			if (number > theHighest)
			{
				theHighest = number;
			}
		}
		std::cout << theHighest;
	}

}
