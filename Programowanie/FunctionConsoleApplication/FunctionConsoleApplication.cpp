
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
	std::cout << textParam <<"\n";
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
int main()
{
	string text;
	int age;
	cout << "Podaj imi� \n";
	cin >> text;
	cout << "Podaj wiek \n";
	cin >> age;
	task3(text, age);
}
