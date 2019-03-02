#include <locale.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

class Task1
{
public:

	Task1()
	{
		FillStruct();
	}

	void Output()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		cout << setw(35) <<"Структура студенты" << endl;
		cout << endl;
		cout << setw(10) << "Имя" << setw(10) << "Фамилия" << setw(10) << "Класс" << setw(10) << setw(10) <<  "Буква класса" << endl;
		for (int i = 0; i < 10; i++)
		{
			printStruct(Name[i]);
		}
		FindStudent();
	}

private:
	typedef struct
	{
		string Name;
		string SurName;
		int klass;
		char Nameklass;
	} Students;

	Students Name[10];

	void FillStruct()
	{
		Name[0] = { "Сергей", "Иванов", 11, 'A'};
		Name[1] = { "Антон", "Петров", 10, 'В' };
		Name[2] = { "Анастасия", "Смирнова", 1, 'Г' };
		Name[3] = { "Владислав", "Медведев", 3, 'A' };
		Name[4] = { "Александр", "Киселев", 6, 'A' };
		Name[5] = { "Максим", "Васильев", 11, 'В' };
		Name[6] = { "Андрей", "Костров", 9, 'A' };
		Name[7] = { "Алексей","Простов", 10, 'В' };
		Name[8] = { "Мария", "Сидорова", 11, 'A' };
		Name[9] = { "Сергей", "Иванов", 3, 'Г' };
	}

	void printStruct(const Students& name)
	{
		cout <<  setw(10) << name.Name;
		cout << setw(10) << name.SurName;
		cout << setw(10) << name.klass;
		cout << setw(10) << name.Nameklass << endl;
	}

	void FindStudent()
	{
		cout << "\nУченики имеющие одинаковые имя и фамилию:" << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = i + 1;j < 10; j++)
			{
				if ((Name[i].Name == Name[j].Name) && (Name[i].SurName == Name[j].SurName))
				{
					cout << Name[i].Name << " " << Name[i].SurName << " " << Name[i].klass << Name[i].Nameklass << " и ";
					cout << Name[j].Name << " " << Name[j].SurName << " " << Name[j].klass << Name[j].Nameklass << endl;
				}
			}
		}
	}

};