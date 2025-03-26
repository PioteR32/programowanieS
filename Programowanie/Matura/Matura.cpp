// Matura.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
int NumberOfDiffrent(vector<int> numbers)
{
	int count = 0;
	vector<int> numberWas = vector<int>();
	for (int num : numbers)
	{
		bool isDiffrent = true;
		for (int num1 : numberWas)
		{
			if (num1 == num)
			{
				isDiffrent = false;
				break;
			}
		}
		if (isDiffrent)
		{
			count++;
			numberWas.push_back(num);
		}
	}
	return count;
}

int main()
{
	std::cout << "Hello World!\n";
	vector <int> numbers = vector<int>();
	std::ifstream wczytywanie("przyklad.txt");
	int wczytane;
	while (wczytywanie >> wczytane)
	{
		numbers.push_back(wczytane);
	}
	int count = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;

		int tmpNum = num;
		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);
		if (firstDigit == lastDigit)
		{
			count++;
		}
	}

	vector<int> pierwsze = vector<int>();
	int number = 1;
	while (number < 50000)
	{
		number += 1;
		bool isFirst = true;
		for (int num : pierwsze)
		{
			if (number % num == 0)
			{
				isFirst = false;
				break;
			}
		}
		if (isFirst)
		{
			pierwsze.push_back(number);
		}
	}
	vector<int> czynniki = vector<int>();
	int najwiecejPierwszych = 0;
	int najwiecejPierwszychNumber = 0;
	int najwiecejRoznychNumber = 0;
	int najwiecejRoznych = 0;
	for (int num : numbers)
	{
		vector<int> czynniki = vector<int>();
		for (int dzielnik : pierwsze)
			if (num != 1 && dzielnik < num / 2)
			{
				if (num % dzielnik == 0)
				{
					num = num / dzielnik;
					czynniki.push_back(dzielnik);
				}
			}
			else
				break;
		if (najwiecejPierwszych < czynniki.size())
		{
			najwiecejPierwszych = czynniki.size();
			najwiecejPierwszychNumber = num;
		}
		int tmp = NumberOfDiffrent(czynniki);
		if (tmp > najwiecejRoznych)
		{
			najwiecejRoznych = tmp;
			najwiecejRoznychNumber = num;
		}

	}
	ofstream write = ofstream("odp.txt");
	string tmp = najwiecejPierwszychNumber + " " + najwiecejPierwszych;
	tmp += " " + najwiecejRoznychNumber;
	tmp += " " + najwiecejRoznych;
	write.write(tmp.c_str(), tmp.length());
	write.close();
}
