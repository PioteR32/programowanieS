
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
	std::cout << textParam <<"\n";
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
int main()
{
	string text;
	int age;
	cout << "Podaj imiê \n";
	cin >> text;
	cout << "Podaj wiek \n";
	cin >> age;
	task3(text, age);
}
