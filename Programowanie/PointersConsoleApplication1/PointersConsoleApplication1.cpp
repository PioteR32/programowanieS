

#include <iostream>
using namespace std;
 
void task1()
{
	int fn = 90;
	int sn = 87;
	int tab[] = { 13,15,43 };
	cout << "Wartoœæ pierwszej zmiennej" << fn << "\n";
	cout << "Wartoœæ drugiej zmiennej" << sn << "\n";
	cout << "Adres pierwszej zmiennej" << &fn << "\n";
	cout << "Adres drugiej zmiennej" << &sn << "\n";
	*(&fn) *= 9;
	cout << "Wartoœæ pierwszej zmiennej" << fn << "\n";


	cout << "Zawartoœæ zerowej komórki " << tab[0] << "\n";
	cout << "Zawartoœæ pierwszej komórki " << tab[1] << "\n";
	cout << "Adres zerowej komórki " << &tab[0] << "\n";
	cout << "Adres pierwszej komórki " << &tab[1] << "\n";
	cout << "Adres tablicy komórki " << tab << "\n";
	cout << "Zawartoœæ zerowej komórki " << *(tab + 0) << "\n";
	cout << "Zawartoœæ pierwszej komórki " << *(tab + 1) << "\n";
}
int main()
{
   
}

