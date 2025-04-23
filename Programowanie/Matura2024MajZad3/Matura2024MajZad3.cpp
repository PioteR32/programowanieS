// Matura2024MajZad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int GetOddNumberAbbreviation(int liczba)
{
    int i = 0;
    int oddNumberAbbreviation = 0;
    do
    {
        int tmp = (liczba % 10);
        if (tmp % 2)
        {

            oddNumberAbbreviation += tmp * pow(10, i);
            i++;
        }
        liczba /= 10;
    } while (liczba != 0);
    return oddNumberAbbreviation;
}
int main()
{
    std::ifstream file = std::ifstream("skrot_przyklad.txt");
    std::vector<int>numbers = std::vector<int>();
    int number;
    while (file >> number)
    {
        numbers.push_back(number);
    }

}
