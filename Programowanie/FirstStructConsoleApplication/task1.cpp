
#include <iostream> 
class MojaKlasa {
public:
	int wartoœæ = 10;

	// Przeci¹¿enie operatora dodawania
	MojaKlasa operator+(const MojaKlasa& inny) {
		MojaKlasa wynik;
		wynik.wartoœæ = wartoœæ + inny.wartoœæ;
		return wynik;
	}
	MojaKlasa operator=(const MojaKlasa& inny) {
		MojaKlasa wynik;
		wynik.wartoœæ = inny.wartoœæ;
		return wynik;
	}
	// Przeci¹¿enie operatora porównania
	bool operator==(const MojaKlasa& inny) {
		return wartoœæ == inny.wartoœæ;
	}
};
struct point
{
	double x;
	double y;
};
long double potegowanie(double number, int potega)
{
	if (potega == 0)
		return 1;
	return number * potegowanie(number, potega - 1);
}
void task1()
{
	std::string tmp;
	MojaKlasa my1;
	MojaKlasa my2;
	my2= (my2 + my1);

	point point;
	std::cout << "Podaj x\n";
	std::cin >> point.x;
	std::cout << "Podaj y\n";
	std::cin >> point.y;
	double lineLenght;
	lineLenght = sqrt(potegowanie(point.x , 2) + potegowanie(point.y, 2));
	std::cout << "Odleg³oœæ do œrodka : " << lineLenght;
}