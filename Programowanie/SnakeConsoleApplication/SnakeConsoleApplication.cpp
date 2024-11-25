

#include <windows.h>
#include <conio.h>
#include <iostream>
#include "../TasksConsoleApplication/TasksConsoleApplication.cpp"
//int randomNumber(int LOWER_RANGE, int UPPER_RANGE)
//{
//	int enemy;
//	enemy = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
//	return enemy;
//}
//void setCursor(int x, int y)
//{
//	COORD c;
//	c.X = x;
//	c.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}

//
//
//int main()
//{
//	/*std::string password = "";
//	char characterFromUser;
//
//	do
//	{
//		characterFromUser = _getch();
//		std::cout << "*";
//		if (characterFromUser != 13)
//			password += characterFromUser;
//	} while (characterFromUser != 13);
//
//	std::cout << "\n" << password;
//
//	return 0;*/
//
//	unsigned short x = 0;
//	unsigned short y = 0;
//	char direction = 'd';
//	int consoleHeight, consoleWidth;
//
//	getConsolResolution(consoleWidth, consoleHeight);
//
//	showConsoleCursor(false);
//	system("cls");
//
//	setCursor(1, 1);
//	std::cout << "M";
//
//	while (true)
//	{
//		setCursor(x, y);
//		std::cout << "X";
//
//		if (_kbhit())
//			direction = _getch();
//
//		Sleep(100);
//
//		setCursor(x, y);
//		std::cout << " ";
//
//		switch (direction)
//		{
//		case 'w': //góra
//			if (y > 0)
//				y--;
//			else
//				y = 0;
//			break;
//		case 's': //dó³
//			if (y < consoleHeight)
//				y++;
//			else
//				y = consoleHeight;
//			break;
//		case 'a': //lewo
//			if (x > 0)
//				x--;
//			else
//				x = 0;
//			break;
//		case 'd': //prawo
//			if (x < consoleWidth)
//				x++;
//			else
//				x = consoleWidth;
//			break;
//		default:
//			break;
//		}
//		if (direction == 27)
//			break;
//	}
//
//
//	//setCursor(5, 7);
//	//std::cout << "Hello World!\n";
//	//setCursor(4, 6);
//	//int x;
//	//std::cin >> x;
//}