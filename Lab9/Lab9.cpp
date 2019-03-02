#include "pch.h"
#include "conio.h"
#include "stdio.h"
#include <iostream>
#include "Menu.h"
#include "Task1.h"
#include "Task2.h"


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 6");
	int key = 0;
	while (key != 3) {
		Menu menu;
		menu.MyMenu();
		std::cin >> key;
		switch (key)
		{
		case 1: {
			//Задание №1
			Task1 Result1;
			Result1.Output();
			break;
		}

		case 2:
		{
			//Задание №2
			Task2 Result2;
			Result2.ShowResult();
			break;
		}
		case 3:
			std::cout << "Выход из программы..." << std::endl;
			exit(EXIT_SUCCESS);
			break;
		default:
			std::cerr << "Вы выбрали неверный пункт меню" << std::endl;
		}
		system("pause");
		system("cls");
	}
	return 0;

}
