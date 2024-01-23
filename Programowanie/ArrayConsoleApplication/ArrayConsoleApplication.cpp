#include <iostream>
using namespace std;
//Napisz program , który wczyta np.5 liczb a nastêpnie je wyœwietli
static void task1()
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
static void task2()
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
static void task3()
{
	
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 50000;
	const unsigned ARRAY_SIZE = 32;
	int number[ARRAY_SIZE] = {}, table[ARRAY_SIZE]{};
	int max = number[0];
	int theLowest = max;
	
	srand(time(0));

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		number[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		if (number[i] > max)
		{
			max = number[i];
		}
		if (number[i] < theLowest)
		{
			theLowest = number[i];
		}
		cout << number[i] << " ";
	}
	cout << "\n";
	cout << "najwiêksza " << max << " najmniejsza " << theLowest;
}
//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa.
static void task4()
{
	const long long UPPER_RANGE = 1000000;

	//wersja 1

	for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
	{
		bool isPrime = true;
		for (long long i = 2; i <= numberToCheck / 2; i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			std::cout << numberToCheck << ", ";
	}
	std::cout << "\n";

	//wersja 2
	bool sieveOfEratosthenes[UPPER_RANGE + 1]{};

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		sieveOfEratosthenes[i] = true;
	}

	for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
	{
		if (sieveOfEratosthenes[number] /*== true*/)
		{
			for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
				sieveOfEratosthenes[numberToCrossOut] = false;
		}
	}

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		if (sieveOfEratosthenes[i] /*== true*/)
			std::cout << i << ", ";
	}
	std::cout << "\n";
}
void static task5()
{
	int numberOfWeek = 5;
	cout << "Podaj numer dnia tygodnia \n";
	cin >> numberOfWeek;

	string dayNames[] = { "Poniedzia³ek" , "Wtorek" , "Œroda" , "Czwartek" , "Piatek", "Sobota" ,"Niedziela" };
	  

	if (numberOfWeek >= 0 && numberOfWeek <= 9)
		cout << "Ten dzieñ to" << dayNames[numberOfWeek];
	else
		cout << "Niew³¹œciwy numer ";
}
void task6()
{
	const unsigned short LOWER_RANGE = 2;
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
	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (number[j] < number[minIndex])
			{
				minIndex = j;
			}
			int tmp = number[minIndex];
			number[minIndex] = number[i];
			number[i] = tmp;
		}
	}
	cout << " posortowane";
	for (int k = 0; k < ARRAY_SIZE; k++)
	{
		cout << number[k] << ", ";
	}
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task6();
}

