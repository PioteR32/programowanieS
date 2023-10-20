

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

operatory logiczne
&& - AND
|| - OR
! - NOT		                     Albo
XOR - nie w c++
a	b	a&&b	a||b	!a		a XOR b		
F   F	  F		F		T			F
F	T	  F		T		T			T
T	F	  F		T		F			T
T	T	  T		T		F			F		
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





void task2()
{

	int firstNumber, rest;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	rest = firstNumber % 2;
	if (rest == 0)
	{
		cout << "\n Liczba parzysta";
	}

	if (firstNumber != 0)
	{
		cout << " \n Liczba nieparzysta";
	}

	// pełna instrukcja if
	if (rest == 0)
	{
		cout << "\n Liczba parzysta";
	}
	else
	{
		cout << " \n Liczba nieparzysta";
		cout << " \n Liczba nieparzysta";
	}
}

	// sprawdź czy liczba jest z zakresu <-1,10)
void task3()
{
		
	int firstNumber ;
	
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber >= 1 && firstNumber < 10)
	{
		cout << " liczba jest z zakresu <1,10)";
	}
	else
	{
		if (firstNumber >= 10) 
		{
			cout << " liczba   jest większa od zakresu <1,10)";
		}
		else
		{
			cout << " liczba   jest mniejsza od zakresu <1,10)";
		}
	}
	// wersja druga
	

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber >= 1 && firstNumber < 10)
		cout << " liczba jest z zakresu <1,10)";
	else
		if (firstNumber >= 10)
			cout << " liczba   jest większa od zakresu <1,10)";
		else
			cout << " liczba   jest mniejsza od zakresu <1,10)";
		
	
}
// podziel dwie liczby
#include <string>
void task4()
 

{
	string a = " debilem";
	float firstNumber, secondNumber;

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> secondNumber;

	
	if (secondNumber == 0) 
	{
		cout << " Jesteś " << a << "nie dziel przez zero ty" << a;
	}
	
	else
	{
		float quoitent = firstNumber / secondNumber;
	}
}

//. Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat./
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> secondNumber;
	if (firstNumber == secondNumber) 
	{
		std::cout << "Liczba jest równa liczbie drugiej\n";
	}
	else
	{
		std::cout << "Liczba nie  jest równa liczbie drugiej\n";
	}

}
// Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
void task6()
{
	int firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	
	if (18 >= firstNumber )
	{
		std::cout << "Pełnoletni\n";
	}
	else
	{
		std::cout << "niepełnoletni\n";
	}
}
//  Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
void task7() {
	int firstNumber;

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	
	if (0 <firstNumber )
	{
		std::cout << "Liczba bezwzględna tej liczby \n" << firstNumber* -1;
	}
	else
	{
		std::cout << "Liczba bezwzględna tej liczby \n " << firstNumber;
	}
}
//  Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
void task8() {
	int firstNumber;

	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	if (firstNumber <= 0 || firstNumber >= 8)
	{
		if (firstNumber == 1)
		{
			std::cout << "Dzień tygodnia to poniedziałek \n";
		}
		if (firstNumber == 2)
		{
			std::cout << "Dzień tygodnia to wtorek \n";
		}
		if (firstNumber == 3)
		{
			std::cout << "Dzień tygodnia to środa \n";
		}
		if (firstNumber == 4)
		{
			std::cout << "Dzień tygodnia to czwartek \n";
		}
		if (firstNumber == 5)
		{
			std::cout << "Dzień tygodnia to piątek \n";
		}
		if (firstNumber == 6)
		{
			std::cout << "Dzień tygodnia to sobota \n";
			if (firstNumber == 7)
			{
				std::cout << "Dzień tygodnia to niedziela \n";
			}

		} }
	}
//  Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i wyświetli większą z nich.
void task9()
{

	double firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	cin >> secondNumber;
	if (firstNumber < secondNumber)
	{
		cout << "\n Liczba większa to : " << secondNumber;
	}
	else 
	{
		cout << "\n Liczba większa to : " << firstNumber;
	}
	


}
//  Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
void task10()
{

	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj rok \n";
	cin >> firstNumber;
	secondNumber = firstNumber % 4;
	thirdNumber = firstNumber % 100;
	if (0 < firstNumber)
	{


		if (firstNumber != 0) {


			if (thirdNumber == 0)
			{

				secondNumber = firstNumber;

				secondNumber = firstNumber % 400;
				if (secondNumber == 0)
				{
					cout << "\n rok  " << firstNumber << " jest przestępny ";
				}
				else
				{
					cout << "\n rok  " << firstNumber << " nie jest przestępny ";
				}
			}
			else
			{
				if (secondNumber == 0)
				{
					cout << "\n rok  " << firstNumber << " jest przestępny ";
				}
				else
				{
					cout << "\n rok  " << firstNumber << " nie jest przestępny ";
				}
			}
		}
		else
			cout << "\n rok  " << firstNumber << " nwm czy  jest przestępny ";
	}
	else
		cout << "\n ty kur... jeb.. próbowałeś wywalic program";
}
// Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.

//  Napisz program, który poprosi użytkownika o podanie masy ciała (w kilogramach) i wzrostu (w metrach).
// to do nad tym Na podstawie tych danych oblicz wskaźnik BMI (Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
//  Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
//  Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe. Wyświetl wynik lub odpowiedni komunikat, jeśli liczba jest ujemna.
//  Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)






int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task10();

}

