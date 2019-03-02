#include <iostream>

using namespace std;

class Menu
{
public:
	void MyMenu()
	{
		cout << "Выберите задание\n";
		cout << "1. Задание №1\n";
		cout << "2. Задание №2\n";
		cout << "3. Выход\n" << std::endl;
		cout << ">>> ";
	}
};
