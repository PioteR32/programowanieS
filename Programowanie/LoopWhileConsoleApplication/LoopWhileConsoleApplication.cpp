
#include <iostream>
using namespace std;
// podaj sum� liczby
void task1()
{
	int number, sum, rest;
	sum = 0;
	std::cout << " Podaj liczb�";
	cin >> number;
	while (sum != 0) {
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;

	} 
	cout << " suma liczby to" << sum;
}
// Program licz�cy NWD dw�ch liczsb 

void task2()
{
	int numberOfUser, firstNumber,nwd;
	std::cout << " Podaj liczb�";
	cin >> numberOfUser;
	std::cout << " Podaj liczb�";
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
	std::cout << " Podaj liczb�";
	cin >> numberOfUser;
	std::cout << " Podaj liczb�";
	cin >> firstNumber;
	
}
int main()
{
   
}

