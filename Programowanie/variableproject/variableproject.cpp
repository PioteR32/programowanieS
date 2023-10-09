// variableproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void task1() 
{
    double number_from_user;


    using namespace std;
    cout << " Give  a number";
    cout << "\n";
    cin >> number_from_user; cout << "\n";
    cout << number_from_user << "\n";
   


}

// Program obliczający pole prostokąta.
void  task3()
{
    double side_first, side_second;
    cout << "Podaj pierwszy  bok:";
    cin >> side_first;
    cout << "Podaj drugi   bok:";
    cin >> side_second;
    cout << "Pole to: " << side_first * side_second;

 }
// Program obliczający objętość stożka.
void task4() 
{
    double base_diameter, height, area_cone_base, volume;
    cout << "Podaj promień  :";
    cin >> base_diameter;
    cout << "Podaj wysokość:";
    cin >> height;
    area_cone_base = base_diameter * base_diameter * 3.1415;

    cout << "Objętość: " << 1/3.0 * (area_cone_base * height);

}
// Program obliczający pole koła.
void task5() 
{
    double first_radius, secend_radius;
    cout << " Podaj promień koła";
    cin >> first_radius;
    cout << "Wynik : " << first_radius * first_radius * 3.1415;


}
// Program obliczający wartość wyrażenia a^2 + b^2
  void task6() 
{
    double first_number, secend_number;
    cout << " Podaj pierwszą liczbę";
    cin >> first_number;
    cout << " Podaj drugą liczbę";
    cin >> secend_number;
    cout << "Wynik : " << first_number * first_number + secend_number * secend_number;


}
// Program obliczający pole trójkąta o podstawie b i wysokości h
  void task7()
  {
      double first_side, height;
      cout << " Podaj pierwszy bok trójkąta";
      cin >> first_side;
      cout << " Podaj wysokość ";
      cin >> height;
      cout << "Wynik : " << (first_side * height) / 2;


  }
// Program obliczający objętość kuli o promieniu r V=4/3πr^3
  void task8()
  {
      double first_radius;
      cout << " Podaj pierwszy bok trójkąta";
      cin >> first_radius;
      
      cout << "Objętość kuli  : " << 4.0 / 3 * 3.1415 * first_radius * first_radius * first_radius;

  }
// Program obliczający pole trapezu o podstawach a i b oraz wysokości h
  void task9()
  {
      double side_first, side_second, height;
      cout << " Podaj pierwszy bok trójkąta";
      cin >> side_first;
      cout << " Podaj drugi bok trójkąta";
      cin >> side_second;
      cout << " Podaj wysokość trójkąta";
      cin >> height;

      cout << "Pole trapezu  : " << (side_first + side_second) * height /2

  }
// Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
  void task10()
  {
      double number_first, number_second, number_third, first_weight, second_weight, third_weight;
      cout << " Podaj pierwszą liczę /n";
      cin >> number_first;
      cout << "/n"
      cout << " Podaj wagę tej liczby /n ";
      cin >> first_wight;
      cout << "/n"
      cout << " Podaj drugą liczę /n" ;
      cin >> number_second;
      cout << "/n"
      cout << " Podaj wagę tej liczby /n";
      cin >> second_wight;
      cout << "/n"
      cout << " Podaj trzecią liczę /n";
      cin >> number_third;
      cout << "/n"
      cout << " Podaj wagę tej liczby /n";
      cin >> third_wight;
      cout << "/n"
      
      cout << "Średnia ważona   : " << (number_first + number_second + number_third) / (first_weight + second_weight + third_weight);

  }
// Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
  task11() {
      double first_number;
      cout << " Podaj pierwszą długość w m  ";
      cin >> first_number;
      cout << " Ta długość w cm";
      cout << first_number * 100;
      cout << " Ta długość w mm";
      cout << first_number * 1000;

      
  }
// Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
  task12() {
      double price_zl;
      int = unlink(const char = )
      cout << " Podaj pierwszy bok trójkąta";
      cin >> price_zl;
      cout << " W dolarach";
      cin >> price_zl * 4.31;
      cout << " w Euro";
      cin >> price_zl * 4.56;

      
  }
  



  }
//Oblicz średnią arytmetyczxną dwóch liczb

void task2() 
{
    double number1;
    double number2;
   
    cout << "Podaj liczbę 1 \n";
    cin >> number1;
    cout << "\n Podaj liczbę 2 \n ";
    cin >> number2;
    cout << "srednia to : " << (number1 + number2) / 2;


}



        int main()
{
        setlocale(LC_CTYPE, "polish");
           // task2();
           // task3();
        task13()
        

}

/* Algorytm - skończony zbiór instrukcji, sposób postępowania prowadzący do rozwiązania problemu. 
* Określa też kolejność instrukcji 
Zapis algorytmu
 rysunkowy
 opis słowny
 w punktach 
 schemat blokowy 
 kod źródłowy danego języka programowania
 pseudokod


 Zmienna jest to obszer w pamięci operacyjnej,  w której można przechowywać tylko jedną daną, jest to identyfikator.
  Instrukcja Deklaracji zminnej :
  typ zmiennej nazwa:
  Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów
 typ wbudowany :
 int- 4 bajtowa liczba całkowita  za znakiem przedział -2 147 483 648 do 2 147 483 648.  
 short - 2 bajtowa liczba całkowita ze znakiem  -32 768 do 32 767
 long-4 bajtowa liczba całkowita  za znakiem przedział -2 147 483 648 do 2 147 483 648. 
 long long - 8 bajtowa liczba całkowita  za znakiem przedział -9 trylionów do 9 trylionów.
 unsigned - zmienna 0 do 2*max

  float - 4 bajtowa licba rzeczywista, dokładność 6-7 cyfr po przecinku;
  double - 8 bajtowa licba rzeczywista, dokładność 15-16 cyfr po przecinku;
  long double- 12 bajtowa licba rzeczywista, dokładność 19-20 liczb po przecinku;
  Nazwa zmiennej - nazwa obszarów pamięci, identyfikator.
  warunki niezbędne:
  dozwolone znaki 
  - alfabet aA - zZ;
  cyfry arabskie 0 - 9;
  podłoga
   
pierwszym znakiem nie może byc cyfra
unikalny w swoim zakresie widoczności 
nie może to byc słowo kluczowe danego języka
warunki programistów:
nazwa zmiennej nie może byc przypadkowa
jeżeli nazwa składa się z wielu wyrazów to nazywamy:
nazwey piszemy po angielsku

pan_kowalski
lub
panKowalski 

*/ 


