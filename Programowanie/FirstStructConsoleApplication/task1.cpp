
#include <iostream> 
class MojaKlasa {
public:
	int warto�� = 10;

	// Przeci��enie operatora dodawania
	MojaKlasa operator+(const MojaKlasa& inny) {
		MojaKlasa wynik;
		wynik.warto�� = warto�� + inny.warto��;
		return wynik;
	}
	MojaKlasa operator=(const MojaKlasa& inny) {
		MojaKlasa wynik;
		wynik.warto�� = inny.warto��;
		return wynik;
	}
	// Przeci��enie operatora por�wnania
	bool operator==(const MojaKlasa& inny) {
		return warto�� == inny.warto��;
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
	std::cout << "Odleg�o�� do �rodka : " << lineLenght;
}