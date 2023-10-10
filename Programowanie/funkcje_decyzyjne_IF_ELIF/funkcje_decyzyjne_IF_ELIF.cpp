

#include <iostream>
using namespace std;
/*
operatory warunkowe:
- WIĘKSZE  >
- MNIEJSZE <
- MNIEJSZE LUB RÓWNE <=
- WIĘKSZE LUB RÓWNE >= 
- RÓWNE ==
- NIE RÓWNE !=

*/
void task1()
{
	double firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber < 0)
	{
		cout << "\n Liczba ujemna";
	}

	if (firstNumber > 0)
	{
		cout << " \n Liczba dodatnia";
	}

	if (firstNumber == 0)
	{
		cout << "\n Liczba równa 0";
	}


}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

