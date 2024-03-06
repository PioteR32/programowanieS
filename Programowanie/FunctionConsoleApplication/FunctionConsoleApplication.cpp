
#include <iostream>
using namespace std;
//funkcja
//  - zbiór instrukcji realizuj¹ce zadanie
//- podprogram 
// budowa funkcji:
//      * nag³ówek
//      * cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi
// Nag³ówek:
//  typ_zwracanej_danej_nazwa_funkcji(parametry)
//     
void task1()
{
	std::cout << "Hallo World!\n";
}
void task2(string textParam)
{
	std::cout << textParam << "\n";
}
// wyœwietl czy ktoœ jest pe³noletni i jakie ma imiê i nazwisko
void task3(string name, int age)
{
	cout << "masz na imiê " << name << "\n";
	if (age < 18)
		cout << "nie jesteœ pe³noletni";
	else
		cout << "jesteœ pe³noletni";
}
void task4(int number)
{
	number--;
	cout << "number w funkcji 4 " << number << "\n";
}
// Napisz program który wykorzysta przekazywanie parametru przez referencje 
void task5(int &number)
{
	number--;
	cout << "number w funkcji 5 " << number << "\n";
}
// N
void task6_GetNumber(int &numberFromUser)
{
	cout << "Podaj liczbê \n";
	cin >> numberFromUser;
}
int sumOfNumbers(int fn, int sn)
{
	int s = fn + sn;
	return s;
}
// napisz funkcje która obliczy wartoœæ silni
long long calculatedFactorial(int number)
{
	int factorial = 1;
	for (int i = 2; i <= number; i++)
	{
		factorial = i * factorial;
	}
	return factorial;
}




long long calculatedFactorialV2(int number)
{
	if (number <= 1)
		return 1;
	else
		return number * calculatedFactorialV2(number - 1);
}

void task7()
{
	int number;
	cout << "Podaj silniê\n";
	cin >> number;
	cout << "Silnia yo : " << calculatedFactorialV2(number) << "\n";
}
int main()
{
	/*string text;
	int age;
	cout << "Podaj imiê \n";
	cin >> text;
	cout << "Podaj wiek \n";
	cin >> age;
	task3(text, age);*/
	//int number = 5;
	//int const NUMBER = 9;

	/*cout << "number w main " << number << "\n";
	task4(number);
	cout << "const number w main " << NUMBER << "\n";
	task4(NUMBER);*/

	////cout << "number w main " << number << "\n";
	//task5(number);
	//cout << "const number w main " << number << "\n";
	/*task5(NUMBER);
	cout << "const number w main " << NUMBER << "\n"; b³¹d
	task5(5);*/
	/*int numberFromUsers;
	task6_GetNumber(numberFromUsers);
	cout << "Liczba podana przez urzytkownika " << numberFromUsers;*/
	/*int firstNumber = 9;
	int secondNumbers = 1;
	cout << "Wynik to " << sumOfNumbers(firstNumber, secondNumbers) << "\n";
}*/
