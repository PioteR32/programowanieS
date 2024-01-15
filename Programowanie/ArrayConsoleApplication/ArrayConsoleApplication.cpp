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
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;
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
	double sum; 
	for(int i = 0; i < ARRAY_SIZE; i++)
		sum = number[i];
	double avg = sum / ARRAY_SIZE;
}
// napisz program który zape³ni tablice liczbami pseudolosowymi znajdŸ najmniejsz¹ i najwiêksz¹ liczbê
void task3()
{
	
	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE = 100000;
	const unsigned ARRAY_SIZE = 1000;
	int sprawdzamUpper = 0;
	int sprawdzamLower = UPPER_RANGE;
	int number[ARRAY_SIZE] = {};
	srand(time(0));
	bool lower = false;
	bool upper = false;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		number[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		if (number[i] > sprawdzamUpper)
		{
			sprawdzamUpper = number[i];
		}
		if (number[i] < sprawdzamLower)
		{
			sprawdzamLower = number[i];
		}
		cout << number[i] << " ";
	}
	cout << "\n";
	cout << "najwiêksza " << sprawdzamUpper << " najmniejsza " << sprawdzamLower;
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}

