// Matura2024MajZad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
const int MAX_PRIME_NUMBER = 15000;
int GetOddNumberAbbreviation(int liczba)
{
	int i = 0;
	int oddNumberAbbreviation = 0;
	do
	{
		int tmp = (liczba % 10);
		if (tmp % 2)
		{

			oddNumberAbbreviation += tmp * pow(10, i);
			i++;
		}
		liczba /= 10;
	} while (liczba != 0);
	return oddNumberAbbreviation;
}
void GeneratePrimeNumbers(std::vector<int>* primeNumbers)
{
	int number = 1;
	while (number < MAX_PRIME_NUMBER)
	{
		number += 1;
		bool isFirst = true;
		for (int primeNumber : *primeNumbers)
		{
			if (number % primeNumber == 0)
			{
				isFirst = false;
				break;
			}
		}
		if (isFirst)
		{
			primeNumbers->push_back(number);
		}
	}
}
int NWD(int highestValue, int lowerValue, std::vector<int> primeNumbers)
{
	int NWD = 1;
	std::vector<int> dzielniki;
	for (int primeNum : primeNumbers)
	{
		if (primeNum > lowerValue)
			break;
		if (lowerValue % primeNum == 0 && highestValue % primeNum == 0)
			dzielniki.push_back(primeNum);
	}
	for (int dzielnik : dzielniki)
		NWD *= dzielnik;
	return NWD;
}
int main()
{
	std::ifstream file = std::ifstream("skrot2_przyklad.txt");
	std::vector<int>numbers = std::vector<int>();
	std::vector<int> primeNumbers = std::vector<int>();
	int number;
	GeneratePrimeNumbers(&primeNumbers);
	while (file >> number)
	{
		numbers.push_back(number);
	}
	int theHighestNotOddNumber = 0;
	int numberOfNotOddNumbers = 0;
	for (int num : numbers)
	{
		if (!GetOddNumberAbbreviation(num))
		{
			numberOfNotOddNumbers++;
			if (num > theHighestNotOddNumber)
				theHighestNotOddNumber = num;
		}
	}
	std::cout << std::to_string(numberOfNotOddNumbers) + "\n";
	std::cout << std::to_string(theHighestNotOddNumber) + "\n";
	
	for (int num : numbers)
	{
		if (int oddNumber = GetOddNumberAbbreviation(num))
		{
			if(NWD(num,oddNumber,primeNumbers) == 7)
				std::cout << std::to_string(num) + "\n";
		}
	}

}
