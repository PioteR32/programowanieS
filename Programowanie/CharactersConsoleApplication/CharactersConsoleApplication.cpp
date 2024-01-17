#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
using namespace std;
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "Poda³eœ znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
void task2()
{
	unsigned char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma³a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma³a litera alfabetu\n";

	/*char x = 'a';
	std::cout << x;
	x = 'g' + 1;
	std::cout << x;
	x = 100;
	std::cout << x;*/

}
void task3()
{
	std::string name;
	cout << "Podaj  swoje imiê\n";
	cin >> name;
	cout << "Witaj" << name;
}
void task4()
{
	string password = "aaa", userpassword;
	cout << "Podaj has³o";
	cin >> userpassword;
	if (password == userpassword)
		cout << "Poprawne has³o";
	else
		cout << "Niepoprawne has³o";

}void task5()
{
	string textFromUser;
	cout << "Podaj ³añcuch znaków\n";
	cin >> textFromUser;
	int numberOfCharacters = 0;
	cout << "Pierwszy znak to" << textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	cout << "Iloœæ znaków" << textFromUser.length() << "\n";
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}
	cout << "Ma³ych liter 'a' jest " << numberOfCharacters << "\n";

}

// Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
	string password;
	do
	{
		cout << "Podaj has³o\n";
		cin >> password;

	} while (password != "aa");
}
// Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task7()
{
	string textFromUser;
	cout << "Podaj ³añcuch znaków\n";
	cin >> textFromUser;
	int numberOfVowel = 0;
	int numberOfConsonant = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a' || textFromUser[i] == 'e' || textFromUser[i] == 'i' || textFromUser[i] == 'o'
			|| textFromUser[i] == 'u' || textFromUser[i] == 'y')
			numberOfVowel++;
		else
			numberOfConsonant++;
	}
	cout << numberOfVowel << "\n" << numberOfConsonant;

}
//Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.
//  Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
void task8()
{
	int numberOfUser;
	string numberBin;
	int reszta;
	cout << "Podaj liczbê\n";
	cin >> numberOfUser;
	int i = 0;
	while (numberOfUser != 0)
	{
		reszta = numberOfUser % 2;
		numberOfUser /= 2;
		if (reszta == 0)
		{
			numberBin = "0" + numberBin;// doklejam na przód
		}
		else
			numberBin = "1" + numberBin;
	}
	cout << numberBin;
}
// Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
	cout << "Podaj wyraz\n";
	string usersWord;
	cin >> usersWord;
	bool isPalindrom = true;
	int usersWordLength = usersWord.length();

	for (int fromStart = 0, fromEnd = usersWordLength - 1; fromEnd >= fromStart; fromStart++, fromEnd--)
	{
		if (usersWord[fromStart] != usersWord[fromEnd])
		{
			isPalindrom = false;
			break;
		}
	}
	if (isPalindrom)
	{
		cout << "Jest palindromem";
	}
	else
		cout << "Nie Jest palindromem";
}
// Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
void task10()
{
	string firstWord, secondWord;
	cout << "Podaj wyraz";
	cin >> firstWord;
	cout << "podaj drugi wyraz";
	cin >> secondWord;
	bool isAnagram = true;
	if (secondWord.length() == firstWord.length())
	{

		for (int i = 0; i < secondWord.length();)
		{
			if (!(isAnagram))
				break;
			else
				for (int j = 0; j < secondWord.length(); j++)
				{

					if (secondWord[i] == firstWord[j])
					{
						secondWord[i] = '0';
						firstWord[j] = '1';
					}
					if (secondWord.length() - 1 == j)
					{
						isAnagram = false;
						break;
					}

				}
		}

	}
	if (isAnagram)
		cout << "Prawda";
	else
		cout << "false";

}
// Program wyci¹gaj¹cy informacje z numeru PESEL
void task123()
{
	string pesel;
	cout << "Podaj pesel";
	cin >> pesel;



	if (pesel[2] == '2' || pesel[2] == '3')
	{
		pesel[2] -= 2;
		cout << "20" << pesel[0] << pesel[1] << " twój rok urodzenia\n";
	}
	else
		cout << "19" << pesel[0] << pesel[1] << " twój rok urodzenia\n";
	cout << "twój miesi¹c urodzenia " << pesel[2] << pesel[3] << "\n";
	cout << "twój dzieñ urodzenia " << pesel[4] << pesel[5] << "\n";
	if (pesel[9] % 2 == 0)
	{
		cout << "Jesteœ kobiet¹\n";
	}
	else
		cout << "Jesteœ mê¿czyzn¹\n";

}
// Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
void task12()
{
	string word;
	int numberSzyfr;
	cout << "Podaj wyraz";
	cin >> word;
	cout << "POdaj przesuniêcie";
	cin >> numberSzyfr;
	for (int i = 0; i < word.length(); i++)
	{
		word[i] = word[i] + numberSzyfr;
	}
	cout << word;
}
/// Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 2 3 4 * +
void taskONP()
{
	bool comeOfFor = true;
	int placeOfplus = 0;
	string numbers;
	string characters;
	string secondNumbers;
	string secondCharacters;
	string mathOperation;
	string onp;
	int charactersNumber = 0;
	cin >> mathOperation;
	for (int i = 0; i < mathOperation.length(); i++)
	{
		if (mathOperation[i] >= '0' && mathOperation[i] <= '9')
		{
			numbers += mathOperation[i];
		}
		if (mathOperation[i] == '*' || mathOperation[i] == '/')
		{
			int k = i + 1;
			if (i < mathOperation.length() - 1)
			{
				for (; k <= mathOperation.length() - 1 && mathOperation[k] != '+' && mathOperation[k] != '-'; k++)
				{
					if (mathOperation[k] >= '0' && mathOperation[k] <= '9')
					{
						secondNumbers += mathOperation[k];
					}
				}
				if (mathOperation[i] == '*')
				{
					secondCharacters = '*';
				}
				else
				{
					secondCharacters = '/';
				}
				i = k;
				comeOfFor = false;
			}
		}
		if ((charactersNumber == 1 || i >= mathOperation.length() - 1) && comeOfFor)
		{

			onp = onp + numbers;
			numbers = "";
			onp = onp + characters;
			characters = "";
			charactersNumber = 0;
			placeOfplus = i;

		}
		if (mathOperation[i] == '+' || mathOperation[i] == '-')

		{
			characters += mathOperation[i];
			charactersNumber++;

		}
		if (!(comeOfFor))
		{
			onp.insert(placeOfplus, secondNumbers + secondCharacters);
			comeOfFor = true;
		}
	}
	cout << onp;
}
void taskONP2()
{
	int positionOfCharacters = 0;
	bool plusGoto = true;
	bool mno¿enieGoto = true;
	int placeOfplus = 0;
	string theLastCharachters;
	string numbers;
	string characters;
	string secondNumbers;
	string secondCharacters;
	string mathOperation;
	string onp;
	int charactersNumber[40] = {};
	int numberOfchar = -1;
	cin >> mathOperation;
	for (int i = 0; i < mathOperation.length(); i++)
	{
		int secondI = i - 1;
		if (mathOperation[i] >= '0' && mathOperation[i] <= '9')
		{
			onp += mathOperation[i];
		}
		if (mathOperation[i] == '+' || mathOperation[i] == '-')
		{
			if (numberOfchar >= 0)
				if (charactersNumber[numberOfchar] == 1 || charactersNumber[numberOfchar] == 2)
				{
					plusGoto = false;
					goto pluss;
				}
			numberOfchar++;
			characters += mathOperation[i];
			charactersNumber[numberOfchar] = 1;
			theLastCharachters.clear();
		}

		if (mathOperation[i] == '*' || mathOperation[secondI] == '*' || mathOperation[i] == '/' || mathOperation[secondI] == '/')
		{
			if (theLastCharachters == "*+" || theLastCharachters == "/+" || theLastCharachters == "*-" || theLastCharachters == "/-")
			{
				characters = mathOperation[i];
				characters += onp[positionOfCharacters];
				onp[positionOfCharacters] = ' ';
				numberOfchar++;
				charactersNumber[numberOfchar] = 2;
				numberOfchar++;
				charactersNumber[numberOfchar] = 1;


			}
		}
		if (mathOperation[i] == '*' || mathOperation[i] == '/')
		{

			if (numberOfchar >= 0)
				if (charactersNumber[numberOfchar] == 2)
				{
					mno¿enieGoto = false;
					goto koniec;
				}
			numberOfchar++;
			characters = mathOperation[i] + characters;
			charactersNumber[numberOfchar] = 2;
		}
		if ((numberOfchar > 0 && charactersNumber[numberOfchar - 1] > charactersNumber[numberOfchar])
			|| i == mathOperation.length() - 1)
		{
		pluss:
		koniec:
			onp += characters;
			theLastCharachters = characters;
			positionOfCharacters = onp.length() - 1;
			characters.clear();
			numberOfchar = -1;
			for (int j = 0; j <= numberOfchar; j++)
			{
				charactersNumber[j] = -1;
			}
		}
		if (!plusGoto)
		{
			numberOfchar++;
			characters += mathOperation[i];
			charactersNumber[numberOfchar] = 1;
			plusGoto = true;
		}
		if (!mno¿enieGoto)
		{
			numberOfchar++;
			characters += mathOperation[i];
			charactersNumber[numberOfchar] = 2;
			mno¿enieGoto = true;
		}
	}
	cout << onp;
}
void taskONP3()
{
	int positionOfCharacters = 0;
	bool plusGoto = true;
	bool mno¿enieGoto = true;
	int placeOfplus = 0;
	string theLastCharachters;
	string numbers;
	string characters;
	string secondNumbers;
	string secondCharacters;
	string mathOperation;
	string onp;
	int charactersNumber[40] = {};
	int numberOfchar = -1;
	cin >> mathOperation;
	for (int i = 0; i < mathOperation.length(); i++)
	{
		if (mathOperation[i] >= '0' && mathOperation[i] <= '9')
		{
			onp += mathOperation[i];
		}
		if ((numberOfchar >= 0 && charactersNumber[numberOfchar - 1] > charactersNumber[numberOfchar])
			|| i == mathOperation.length() - 1
			|| ((mathOperation[i] == '+' || mathOperation[i] == '-') && (charactersNumber[numberOfchar] == 1 || (charactersNumber[numberOfchar] == 2))
				|| ((mathOperation[i] == '*' || mathOperation[i] == '/') && (charactersNumber[numberOfchar] == 2))))
		{
			onp += characters;
			theLastCharachters = characters;
			positionOfCharacters = onp.length() - 1;
			characters.clear();
			numberOfchar = -1;
			for (int j = 0; j <= numberOfchar; j++)
			{
				charactersNumber[j] = -1;
			}
		}
		int secondI = i - 1;
		if (i != 0 && (mathOperation[i] == '*' || mathOperation[i] == '/' ))
		{
			if (theLastCharachters == "*+" || theLastCharachters == "/+" || theLastCharachters == "*-" || theLastCharachters == "/-")
			{
				int toONP = onp.length() - 1;

				characters.clear();
				characters += onp[positionOfCharacters];
				onp[positionOfCharacters] = ' ';

			}
		}
		if (mathOperation[i] == '+' || mathOperation[i] == '-')
		{

			numberOfchar++;
			characters += mathOperation[i];
			charactersNumber[numberOfchar] = 1;
			theLastCharachters.clear();
		}

		if (mathOperation[i] == '*' || mathOperation[i] == '/')
		{


			numberOfchar++;
			characters = mathOperation[i] + characters;
			charactersNumber[numberOfchar] = 2;
		}
	}
	cout << onp;
}
//Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
void taskONPtoNormal()
{
	int sum;
	int numbers[40]{};
	int whichNumbers = 0;
	string characters;
	string mathOperation;
	string onp;
	int charactersNumber[40] = {};
	int numberOfchar = -1;
	cin >> mathOperation;
	for (int i = 0 ; i < mathOperation.length(); i++)
	{
		if (mathOperation[i] >= '0' && mathOperation[i] <= '9')
		{
			whichNumbers++;
			numbers[whichNumbers] = mathOperation[i] - 48;

		}
		if (mathOperation[i] == '+')
		{
			numbers[0] = numbers[whichNumbers - 1] + numbers[whichNumbers];
			whichNumbers = 0;
		}
		if (mathOperation[i] == '-')
		{
			numbers[0] = numbers[whichNumbers - 1] - numbers[whichNumbers];
			whichNumbers = 0;
		}
		if (mathOperation[i] == '*')
		{
			numberOfchar++;
			characters = mathOperation[i] + characters;
			charactersNumber[numberOfchar] = 2;
		}
	}
	cout << numbers[0];
}
//szyfr


void task16()
{
	string word;

	cout << "Podaj wyraz";
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] <= 'z' && word[i] >= 'a')
			word[i] = 'z' - (word[i] - 'a');
		if (word[i] <= 'Z' && word[i] >= 'A')
			word[i] = 'Z' - (word[i] - 'A');
	}
	cout << word;
}
int main()
{
	taskONPtoNormal();
}

/*
Typy znakowe:
* char - 1 bajt ca³kowitoliczbowa ze znakiem <-128; 127>

*/