

#include <iostream>
using namespace std;
 
void task1()
{
	int fn = 90;
	int sn = 87;
	int tab[] = { 13,15,43 };
	cout << "Warto�� pierwszej zmiennej" << fn << "\n";
	cout << "Warto�� drugiej zmiennej" << sn << "\n";
	cout << "Adres pierwszej zmiennej" << &fn << "\n";
	cout << "Adres drugiej zmiennej" << &sn << "\n";
	*(&fn) *= 9;
	cout << "Warto�� pierwszej zmiennej" << fn << "\n";


	cout << "Zawarto�� zerowej kom�rki " << tab[0] << "\n";
	cout << "Zawarto�� pierwszej kom�rki " << tab[1] << "\n";
	cout << "Adres zerowej kom�rki " << &tab[0] << "\n";
	cout << "Adres pierwszej kom�rki " << &tab[1] << "\n";
	cout << "Adres tablicy kom�rki " << tab << "\n";
	cout << "Zawarto�� zerowej kom�rki " << *(tab + 0) << "\n";
	cout << "Zawarto�� pierwszej kom�rki " << *(tab + 1) << "\n";
}
int main()
{
   
}

