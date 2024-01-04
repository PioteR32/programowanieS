#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>

//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go.
using namespace std;
void task1()
{
    char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    std::cout << "Poda�e� znak:" << characterFromUser << "\n";
}

//Napisz program, kt�ry wczyta znak z klawiatury 
//i sprawdzi czy jest to ma�a litera alfabetu.
void task2()
{
    unsigned char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    //if (characterFromUser >= 97 && characterFromUser <= 122)
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "Jest to ma�a litera alfabetu\n";
    else
        std::cout << "Nie jest to ma�a litera alfabetu\n";

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
    cout << "Podaj  swoje imi�\n";
    cin >> name;
    cout << "Witaj" << name;
}
void task4()
{
    string password = "aaa",userpassword;
    cout << "Podaj has�o";
    cin >> userpassword;
    if (password == userpassword)
        cout << "Poprawne has�o";
    else
        cout << "Niepoprawne has�o";
   
}void task5()
{
    string textFromUser;
    cout << "Podaj �a�cuch znak�w\n";
    cin >> textFromUser;
    int numberOfCharacters = 0;
    cout << "Pierwszy znak to" << textFromUser[0] << "\n";
    textFromUser[1] = 'x';
    cout << "Ilo�� znak�w" << textFromUser.length() << "\n";
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }
    cout << "Ma�ych liter 'a' jest " << numberOfCharacters << "\n";

}

// Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
    string password ;
    do 
    {
        cout << "Podaj has�o\n";
        cin >> password;
        
    } while (password != "aa");
}
// Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
    string textFromUser;
    cout << "Podaj �a�cuch znak�w\n";
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
//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.
//  Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
void task8()
{
    int numberOfUser;
    string numberBin;
    int reszta;
    cout << "Podaj liczb�\n";
    cin >> numberOfUser;
    int i = 0;
    while (numberOfUser != 0)
    {
        reszta = numberOfUser % 2;
        numberOfUser /= 2;
        if (reszta == 0)
        {
            numberBin = "0" + numberBin;// doklejam na prz�d
        }
        else
            numberBin = "1" + numberBin;
    }
    cout << numberBin;
}
// Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
    cout << "Podaj wyraz\n";
    string usersWord;
    cin >> usersWord;
    bool isPalindrom = true;
    int usersWordLength = usersWord.length();
    
    for(int fromStart = 0,  fromEnd = usersWordLength - 1; fromEnd >= fromStart; fromStart++ , fromEnd-- )
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
// Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
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
// Program wyci�gaj�cy informacje z numeru PESEL
void task123()
{
    string pesel;
    cout << "Podaj pesel";
    cin >> pesel;
    
   
   
    if (pesel[2]  == '2' || pesel[2] == '3')
    {
        pesel[2] -=  2;
        cout << "20" << pesel[0] << pesel[1] << " tw�j rok urodzenia\n";
    }
    else
      cout << "19" << pesel[0] << pesel[1] << " tw�j rok urodzenia\n";
    cout << "tw�j miesi�c urodzenia " << pesel[2] << pesel[3] << "\n";
    cout << "tw�j dzie� urodzenia " << pesel[4] << pesel[5] << "\n";
    if (pesel[9] % 2 == 0)
    {
        cout << "Jeste� kobiet�\n";
    }
    else
        cout << "Jeste� m�czyzn�\n";

}
// Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
void task12()
{
    string word;
    int numberSzyfr, szyfr;
    cout << "Podaj wyraz";
    cin >> word;
    cout << "POdaj przesuni�cie";
    cin >> numberSzyfr;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = word[i] + numberSzyfr;
    }
    cout << word;
}
/// Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 2 3 4 * +
void taskONP()
{
    string numbers;
    string characters;
    string mathOperation;
    string onp;
    int charactersNumber = 0;
    cin >> mathOperation;
    for (int i = 0; i < mathOperation.length(); i++)
    {
        if (mathOperation[i] >= '0' && mathOperation[i] == '9')
        {
            numbers += mathOperation[i];
        }
        if (charactersNumber == 1)
        {
            onp = onp + numbers;
            numbers = "";
            onp = onp + characters;
            characters = "";
        }
        if (mathOperation[i] == '+' || mathOperation[i] == '-' || mathOperation[i] == '*' || mathOperation[i] == '/')
        {
            characters  += mathOperation[i];
            charactersNumber++;
        }
 

    }
    cout << onp;
}

//szyfr
void task16()
{
    string word;
    
    cout << "Podaj wyraz";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
       if(word[i] <= 'z' && word[i] >= 'a')
           word[i] = 'z' - (word[i] - 'a');
       if (word[i] <= 'Z' && word[i] >= 'A')
           word[i] = 'Z' - (word[i] - 'A');
    }
    cout << word;
}
int main()
{
    taskONP();
}

/*
Typy znakowe:
* char - 1 bajt ca�kowitoliczbowa ze znakiem <-128; 127>

*/