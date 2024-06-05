// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <thread>
#include "MainFunctions.h"
using namespace std;
void coutString(string v)
{
	cout << v;
}
void timer()
{
	char enter; 
	int seconds = 0;
	int tensOfSeconds = 0;
	int minuts = 0;
	int tensOfminuts = 0;
	cout << "timer";

	
	while(true)
	{
		setCursor(1, 1);
		Sleep(1000);
		seconds++;
		if (seconds == 10)
		{	
			seconds = 0;
			tensOfSeconds++;
		}
		if (tensOfSeconds == 60)
		{
			tensOfSeconds = 0;
			seconds = 0;
			minuts++;
		}
		if (minuts == 10)
		{
			tensOfminuts++;
			minuts = 0;
		}
		cout << tensOfminuts << minuts << "." << tensOfSeconds << seconds;
		if (_kbhit())
		{
			enter = _getch();
			if (enter == 13)
				break;
		}
	}
}
void CosTam()
{
	char enter;
	if (_kbhit())
	{
		enter = _getch();
		if (enter == 13)
			timer();
	}
}
string g;
int main()
{
	char enter;
	while (true)
	{
		cin >> g;
		coutString(g);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
