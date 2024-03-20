

#include <iostream>
#include <string>
using namespace std;
/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.

Instrukcje:

Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie

Wybierz operacj� (1/2/3/4): 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3

Wynik mno�enia: 15
*/
long double findNumber(long double table[], int& i)
{
	while (table[i] == 0 && i < 20)
	{
		if (i + 1 == 20)
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
				cout << " nie mo�esz dzieli� przez zero \n";
				return -1;
			}
	}
	int k;
	int number = 0;
	int tmpK = place;
	long double reesult = 0;
	for (k = 0; k < 20; k++)
	{
		if (mathChar[k] == '+')
		{
			tmpK = k + 1;
			number = findNumber(table, tmpK);
			int nu = table[k];
			table[tmpK] = table[k] + number;
			reesult = reesult + table[tmpK];
			table[tmpK] = 0;
			table[k] = 0;
			mathChar[k] = ' ';
		}
		else if (mathChar[k] == '-')
		{
			table[k + 1] = table[k] - table[k + 1];
			table[k] = 0;
			mathChar[k] = ' ';
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
		long double j = getMathProblem("Podaj wyra�enie", table, mathChar);
		cout << calculate(table, mathChar, (int)j);
	}
}

#pragma region task2
//Napisz program, kt�ry b�dzie konwertowa� temperatur� pomi�dzy skalami : Celsiusza, Fahrenheita i Kelvina.
//
//Instrukcje :
//
//	Popro� u�ytkownika o wyb�r jednostki, z kt�rej chce dokona� konwersji(C - Celsiusz, F - Fahrenheit, K - Kelvin).
//	Popro� u�ytkownika o podanie temperatury w wybranej jednostce.
//	Przelicz temperatur� na pozosta�e jednostki(z wykorzystaniem odpowiednich wzor�w konwersji).
//	Wy�wietl przeliczone temperatury.
//	Przyk�adowe dzia�anie programu :
//
//Konwerter Temperatur
//-------------------- -
//Wybierz jednostk� temperatury :
//1. Celsiusz(C)
//2. Fahrenheit(F)
//3. Kelvin(K)
//Wyb�r : C
//
//Podaj temperatur� w stopniach Celsiusza : 25
//
//Przeliczona temperatura :
//Fahrenheit: 77.0 �F
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
	Celcjusze = (temperature - 32) / (9 / 5);
	temperature = Celcjusze + 273, 15;
	return Celcjusze;
}
double changeC(double& temperature)
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
		cout << "Fahreneit : " << changeC(convertedTemperature);
		cout << "Kelvin : " << convertedTemperature;
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
	cout << "Wybierz jednostk� temperatury :\n";

	cout << "1. Celsiusz(C)\n";
	cout << "2. Fahrenheit(F)\n";
	cout << "3. Kelvin(K)\n";
	chooseThe();
}
#pragma endregion task2
#pragma region task3
/*
ZADANIE
Symulator rzutu kostk�

Napisz program, kt�ry b�dzie symulowa� rzut kostk�. Program powinien umo�liwia� u�ytkownikowi wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna) oraz ilo�� rzut�w. Po wykonaniu rzut�w, program powinien wy�wietli� wyniki oraz sum� otrzymanych warto�ci.

Instrukcje:

Popro� u�ytkownika o wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna).
Popro� u�ytkownika o podanie ilo�ci rzut�w.
Wykonaj podan� liczb� rzut�w wybranej kostk�, zapisuj�c wyniki.
Wy�wietl otrzymane wyniki oraz sum� otrzymanych warto�ci.
Przyk�adowe dzia�anie programu:

Symulator rzutu kostk�
-----------------------

Wybierz rodzaj kostki (6/10/20): 10
Ile rzut�w chcesz wykona�?: 5

Wyniki rzut�w kostk� 10-�cienn�:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8

Suma wynik�w: 33

*/

int menu(int* numberOfThrows)
{
	while (true)
	{
		cout << "Podaj ilo�� rzut�w kostk�\n";
		string sGetUser;
		cin >> sGetUser;
		*numberOfThrows = convertStringToInt(sGetUser);

		cout << "1. kostka sze�cienna\n";
		cout << "2. kostka dziesi�cio�cienna\n";
		cout << "3. kostka dwudziesto�cienna\n";
		int getUser;
		cin >> getUser;
		switch (getUser)
		{
		case 1:
			return 6;
		case 2:
			return 10;
		case 3:
			return 20;
		default:
			cout << "z�a cyfra \n";
			continue;
			break;
		}
	}
}
int randomNumber(short LOWER_RANGE, short UPPER_RANGE)
{
	short number;
	number = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	return number;
}
void throwTheDice(int* numberOfStitches, int* numberOfThrows)
{
	int tmpNumber;
	int sum = 0;
	for (int i = 0; i < *numberOfThrows; i++)
	{
		tmpNumber = randomNumber(1, *numberOfStitches);
		cout << i + 1 << ". Rzut" << i + 1 << ": " << tmpNumber << "\n";
		sum += tmpNumber;
	}
	cout << "\n ��czna suma rzut�w : " << sum << "\n";
}
void task3()
{
	srand(time(0));
	int* numberOfThrows = new int;
	int* numberOfStitches = new int;

	*numberOfStitches = menu(numberOfThrows);
	if (*numberOfStitches < 0)
	{
		cout << "b��d";
	}
	else
	{
		throwTheDice(numberOfStitches, numberOfThrows);
	}

	delete numberOfStitches, numberOfThrows;
	numberOfStitches = nullptr;
	numberOfThrows = nullptr;
}
#pragma endregion task3
#pragma region task4
/*
ZADANIE
Konwerter jednostek

Napisz program konwertuj�cy jednostki miar. Program powinien umo�liwia� konwersj� mi�dzy r�nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs�ugiwa� r�ne typy jednostek.

Instrukcje:

Zdefiniuj zestaw jednostek, kt�re chcesz obs�ugiwa� (np. d�ugo��: metry, centymetry, cale; masa: kilogramy, funty).
Popro� u�ytkownika o wyb�r jednostki wej�ciowej i jednostki wyj�ciowej oraz podanie warto�ci do konwersji.
Przekonwertuj warto�� z jednostki wej�ciowej na jednostk� wyj�ciow� na podstawie ustalonego wsp�czynnika konwersji.
Wy�wietl wynik konwersji.
Przyk�adowe dzia�anie programu:

Konwerter jednostek
-------------------

Wybierz jednostk� wej�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 1

Wybierz jednostk� wyj�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 2

Podaj warto�� do konwersji: 5

Wynik konwersji: 500 centymetr�w

*/

int findNumberOfUnitOfMeasurment(string units[], string unitOfMeasure, const int ARRAY_SIZE)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (units[i] == unitOfMeasure)
		{
			return i;
		}
	}
	return -1;
}
int getMeasureValue(std::string value, int& endMeasureValuePosition)
{
	int result = 0;
	for (int i = 0; i < value.length(); i++)
	{
		endMeasureValuePosition = i;
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
		{
			return result;
		}
	}
	return result;
}

string getUnitOfMeasurment(std::string value, int startPosition)
{
	string unitOfMeasurment = "";
	int placeOfFirstChar;
	int placeOfSecondChar;
	for (int i = startPosition; i < value.length(); i++)
	{
		if (value[i] != ' ')
		{
			placeOfFirstChar = i;
			break;
		}
	}
	for (int i = value.length() - 1; i >= startPosition  ; i--)
	{
		if (value[i] != ' ')
		{
			placeOfSecondChar = i;
			break;
		}
	}
	for (int i = placeOfFirstChar; i <= placeOfSecondChar; i++)
	{
		unitOfMeasurment += value[i];
	}
	return unitOfMeasurment;
}

void convertStringToInt(string value, string& unitOfMeasure, double& result)
{
	int i = 0;

	result = getMeasureValue(value, i);
	unitOfMeasure = getUnitOfMeasurment(value, i);
}
string getStringValue(string message)
{
	string unitOfMeasure;
	cout << message;
	getline(cin, unitOfMeasure);
	return unitOfMeasure;
}
void task4()
{
	string unitOfMeasure = getStringValue("Podaj warto�� do przekonwertowania \n");
	string measurment = "";
	string unitsToConvert = getStringValue("Podaj jednostk� na kt�r� chcesz  przekonwertowa� \n");
	double result;
	const int ARRAY_UNIT_SIZE = 4;
	string units[ARRAY_UNIT_SIZE]{ "mm","cm","m","km" };
	double unitToConvertTable[ARRAY_UNIT_SIZE]{ 0.001,0.01,1,1000 };
	double givenValueTable[ARRAY_UNIT_SIZE]{ 1000,100,1,0.001 };
	convertStringToInt(unitOfMeasure, measurment, result);
	int firstPositionInTable = findNumberOfUnitOfMeasurment(units, measurment, ARRAY_UNIT_SIZE);
	int secondPositionInTable = findNumberOfUnitOfMeasurment(units, unitsToConvert, ARRAY_UNIT_SIZE);
	result = result * unitToConvertTable[firstPositionInTable] * givenValueTable[secondPositionInTable];
	cout << "wynik : " << result;

}
#pragma endregion task4
int main()
{
	task4();
}