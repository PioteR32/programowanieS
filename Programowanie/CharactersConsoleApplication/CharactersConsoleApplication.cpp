#include <iostream>

//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go.
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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Typy znakowe:
* char - 1 bajt ca�kowitoliczbowa ze znakiem <-128; 127>

*/