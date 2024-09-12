
#include <iostream> 

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
	point point;
	std::cout << "Podaj x\n";
	std::cin >> point.x;
	std::cout << "Podaj y\n";
	std::cin >> point.y;
	double lineLenght;
	lineLenght = sqrt(potegowanie(point.x , 2) + potegowanie(point.y, 2));
	std::cout << "Odleg³oœæ do œrodka : " << lineLenght;
}