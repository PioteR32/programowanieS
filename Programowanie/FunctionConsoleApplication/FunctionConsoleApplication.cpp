
#include <iostream>
using namespace std;
//funkcja
//  - zbi�r instrukcji realizuj�ce zadanie
//- podprogram 
// budowa funkcji:
//      * nag��wek
//      * cia�o funkcji - instrukcje ograniczone nawiasami klamrowymi
// Nag��wek:
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
// wy�wietl czy kto� jest pe�noletni i jakie ma imi� i nazwisko
void task3(string name, int age)
{
	cout << "masz na imi� " << name << "\n";
	if (age < 18)
		cout << "nie jeste� pe�noletni";
	else
		cout << "jeste� pe�noletni";
}
void task4(int number)
{
	number--;
	cout << "number w funkcji 4 " << number << "\n";
}
// Napisz program kt�ry wykorzysta przekazywanie parametru przez referencje 
void task5(int &number)
{
	number--;
	cout << "number w funkcji 5 " << number << "\n";
}
// N
void task6_GetNumber(int &numberFromUser)
{
	cout << "Podaj liczb� \n";
	cin >> numberFromUser;
}
int main()
{
	/*string text;
	int age;
	cout << "Podaj imi� \n";
	cin >> text;
	cout << "Podaj wiek \n";
	cin >> age;
	task3(text, age);*/
	int number = 5;
	int const NUMBER = 9;

	/*cout << "number w main " << number << "\n";
	task4(number);
	cout << "const number w main " << NUMBER << "\n";
	task4(NUMBER);*/

	////cout << "number w main " << number << "\n";
	//task5(number);
	//cout << "const number w main " << number << "\n";
	/*task5(NUMBER);
	cout << "const number w main " << NUMBER << "\n"; b��d
	task5(5);*/
	int numberFromUsers;
	task6_GetNumber(numberFromUsers);
	cout << "Liczba podana przez urzytkownika " << numberFromUsers;
	
}
