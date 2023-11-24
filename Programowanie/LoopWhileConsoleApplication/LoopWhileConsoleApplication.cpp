
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
	nwd = numberOfUser;

	while(numberOfUser != 0
		|| firstNumber != 0)
	{
		nwd--;
	}
}


void task3()
{
	int numberOfUser,  nwd, firstNumber;
	std::cout << " Podaj liczbê";
	cin >> numberOfUser;
	std::cout << " Podaj liczbê";
	cin >> firstNumber;
	
}
int main()
{
   
}

