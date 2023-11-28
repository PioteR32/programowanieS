
#include <iostream>
using namespace std;
// podaj sumê liczby
void task1()
{
	int number, sum, rest;
	sum = 0;
	std::cout << " Podaj liczbê";
	cin >> number;
	while (sum != 0) {
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;

	} 
	cout << " suma liczby to" << sum;
}
// Program licz¹cy NWD dwóch liczsb 

void task2()
{
	int numberOfUser, firstNumber,nwd;
	std::cout << " Podaj liczbê";
	cin >> numberOfUser;
	std::cout << " Podaj liczbê";
	cin >> firstNumber;
	nwd = numberOfUser < firstNumber ? numberOfUser : firstNumber;

	while (numberOfUser != 0
		|| firstNumber != 0)
	{
		nwd--;
	}
}


void task3()
{
	int numberOfUser,  nwd, firstNumber,dividend = 1;
	std::cout << " Podaj liczbê";
	cin >> numberOfUser;
	std::cout << " Podaj liczbê";
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
void task3()
{
	int a, nwd, b, dividend = 1;
	std::cout << " Podaj liczbê";
	cin >> a;
	std::cout << " Podaj liczbê";
	cin >> b;
	nwd = 1;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;

	}
	
int main()
{
   
}

