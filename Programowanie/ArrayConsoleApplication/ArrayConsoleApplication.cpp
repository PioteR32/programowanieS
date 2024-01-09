#include <iostream>
using namespace std;
//Napisz program , który wczyta np.5 liczb a nastêpnie je wyœwietli
void task1()
{
	const unsigned ARRAY_SIZE = 5;
	int number[ARRAY_SIZE] = {};
	for (int i = 0 ; i  < ARRAY_SIZE ; i++)
	{
		cin >> number[i];
	}
	
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		cout << number[i];
	}
	
}
void task2()
{
	const unsigned short LOWER_RANGE = 6;
	const unsigned short UPPER_RANGE = 6;
	const unsigned ARRAY_SIZE = 5;
	int number[ARRAY_SIZE] = {};
	srand(time(0));
	cout << "wylosowane liczby";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		number[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		cout << number[i] << ", ";
	}
	cout << "\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

