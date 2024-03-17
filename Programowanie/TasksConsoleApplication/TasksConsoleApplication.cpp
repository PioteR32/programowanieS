

#include <iostream>
#include <string>
using namespace std;
/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.

Instrukcje:

Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie

Wybierz operacjê (1/2/3/4): 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3

Wynik mno¿enia: 15
*/
long double findNumber(long double table[], int &i)
{
	while (table[i] == 0 && i < 20)
	{
		if (i+1 == 20)
			return 0;
		i++;
	}
	return table[i];
}
long double calculate(long double table[], char mathChar[], int j)
{
	int place;
	long double  result;
	for (int i = 0; i < j; i++)
	{
		if (mathChar[i] == '*')
		{
			table[i + 1] = table[i] * table[i + 1];
			table[i] = 0;
			mathChar[i] = ' ';
			place = i + 1;
		}
		else if (mathChar[i] == '/')
			if (table[i + 1] != 0)
			{
				table[i + 1] = table[i] / table[i + 1];
				table[i] = 0;
				mathChar[i] = ' ';
				place = i + 1;
			}
			else
			{
				cout << " nie mo¿esz dzieliæ przez zero \n";
				return -1;
			}
	}
	int k;
	int number = 0;
	int tmpK = place;
	long double reesult = 0;
	for ( k = 0; k < 20 ; k++)
	{
		if (mathChar[k] == '+')
		{
			tmpK = k + 1;
			number = findNumber(table, tmpK);
			int nu = table[k];
			table[tmpK] = table[k] + number;
			reesult = reesult +  table[tmpK];
			table[tmpK] = 0;
			table[k] = 0;
			mathChar[k] = ' ';
		}
		else if (mathChar[k] == '-')
		{
			table[k + 1] = table[k] - table[k + 1];
			table[k] = 0;
			mathChar[k ] = ' ';
		}
		table[tmpK] = number;
	}
	return table[j];
	//for(int i = 0 ;i < j;i++)
}


int convertStringToInt(string mathProblem, long double table[], char mathChar[])
{
	int result = 0;
	int j = 0;

	for (int i = 0; i < mathProblem.length(); i++)
	{
		if (mathProblem[i] >= '0' && mathProblem[i] <= '9')
		{
			result = result * 10 + (mathProblem[i] - '0');
			if (mathProblem.length() - 1 > i)
				if (mathProblem[i + 1] == '*' || mathProblem[i + 1] == '/' || mathProblem[i + 1] == '-' || mathProblem[i + 1] == '+')
				{
					mathChar[j] = mathProblem[i + 1];
					table[j] = result;
					result = 0;
					j++;
				}
				else
				{
				}
			else
			{
				table[j] = result;
				result = 0;
			}
		}

	}
	return j;
}

long double getMathProblem(string message, long double table[], char mathChar[])
{
	string number;

	cout << message;
	getline(cin, number);
	return convertStringToInt(number, table, mathChar);
}
void calculator()
{
	long double table[20];
	for (int i = 0; i < 20; i++)
		table[i] = 0;
	char mathChar[20];
	while (true)
	{
		long double j = getMathProblem("Podaj wyra¿enie", table, mathChar);
		cout << calculate(table, mathChar, (int)j);
	}
}

//Napisz program, który bêdzie konwertowaæ temperaturê pomiêdzy skalami : Celsiusza, Fahrenheita i Kelvina.
//
//Instrukcje :
//
//	Poproœ u¿ytkownika o wybór jednostki, z której chce dokonaæ konwersji(C - Celsiusz, F - Fahrenheit, K - Kelvin).
//	Poproœ u¿ytkownika o podanie temperatury w wybranej jednostce.
//	Przelicz temperaturê na pozosta³e jednostki(z wykorzystaniem odpowiednich wzorów konwersji).
//	Wyœwietl przeliczone temperatury.
//	Przyk³adowe dzia³anie programu :
//
//Konwerter Temperatur
//-------------------- -
//Wybierz jednostkê temperatury :
//1. Celsiusz(C)
//2. Fahrenheit(F)
//3. Kelvin(K)
//Wybór : C
//
//Podaj temperaturê w stopniach Celsiusza : 25
//
//Przeliczona temperatura :
//Fahrenheit: 77.0 °F
//Kelvin : 298.15 K
//* /\

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}
double changeF(double& temperature)
{
	int Celcjusze;
	Celcjusze = (temperature - 32) / (9/5) ;
	temperature = Celcjusze + 273, 15;
	return Celcjusze;
}
double changeC(double &temperature)
{
	int Fahreneit;
	Fahreneit = temperature * 9 / 5 + 32;
	temperature = temperature + 273.15;
	return Fahreneit;
}
void chooseThe()
{
	string temperature;
	int getUser;
	
	cin >> temperature;
	cin >> getUser;
	double convertedTemperature = convertStringToInt(temperature);
	switch (getUser)
	{
	case 1:
		cout <<"Fahreneit : " << changeC(convertedTemperature);
		cout <<"Kelvin : " << convertedTemperature;
		break;
	case 2:
		cout << "Celcjusze : " << changeF(convertedTemperature); 
		cout << "Kelvin : " << convertedTemperature;
		break;
	case 3:
		convertedTemperature -= 273.15;
		cout << "Fahreneit : " << changeC(convertedTemperature);
		cout << "Celcjusze : " << convertedTemperature;
	}
}
void task2()
{
	cout << "Wybierz jednostkê temperatury :\n";

	cout << "1. Celsiusz(C)\n";
	cout << "2. Fahrenheit(F)\n";
	cout << "3. Kelvin(K)\n";
	chooseThe();
}
/*
ZADANIE
Symulator rzutu kostk¹

Napisz program, który bêdzie symulowa³ rzut kostk¹. Program powinien umo¿liwiaæ u¿ytkownikowi wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna) oraz iloœæ rzutów. Po wykonaniu rzutów, program powinien wyœwietliæ wyniki oraz sumê otrzymanych wartoœci.

Instrukcje:

Poproœ u¿ytkownika o wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna).
Poproœ u¿ytkownika o podanie iloœci rzutów.
Wykonaj podan¹ liczbê rzutów wybranej kostk¹, zapisuj¹c wyniki.
Wyœwietl otrzymane wyniki oraz sumê otrzymanych wartoœci.
Przyk³adowe dzia³anie programu:

Symulator rzutu kostk¹
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonaæ?: 5

Wyniki rzutów kostk¹ 10-œcienn¹:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wyników: 33

*/

/*
ZADANIE
Konwerter jednostek

Napisz program konwertuj¹cy jednostki miar. Program powinien umo¿liwiaæ konwersjê miêdzy ró¿nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs³ugiwaæ ró¿ne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, które chcesz obs³ugiwaæ (np. d³ugoœæ: metry, centymetry, cale; masa: kilogramy, funty).
Poproœ u¿ytkownika o wybór jednostki wejœciowej i jednostki wyjœciowej oraz podanie wartoœci do konwersji.
Przekonwertuj wartoœæ z jednostki wejœciowej na jednostkê wyjœciow¹ na podstawie ustalonego wspó³czynnika konwersji.
Wyœwietl wynik konwersji.
Przyk³adowe dzia³anie programu:

Konwerter jednostek
-------------------

Wybierz jednostkê wejœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 1

Wybierz jednostkê wyjœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 2

Podaj wartoœæ do konwersji: 5

Wynik konwersji: 500 centymetrów

*/

int main()
{
	calculator();
}