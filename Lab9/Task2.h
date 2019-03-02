#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Task2
{
public:
	struct Students
	{
		string FIO;
		string numberGroup;
		float point;
		float income;

		void ShowStruct()
		{
			cout << setw(20) << FIO;
			cout << setw(20) << numberGroup;
			cout << setw(20) << point;
			cout << setw(20) << income << endl;
		}
	};

	void ShowResult()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		FillStruct();
		cout << setw(17) << "ФИО" << setw(22) << "Группа" << setw(25) << "Средний балл" << setw(15) << "Доход" << endl;
		OutputStruct();
		FindStudentMinIncome();
	}

private:
	

	Students students[5];
	void FillStruct()
	{
		students[0] = { "Сергей Иванов", "18ИТ-3с", 8.3, 659.22 };
		students[1] = { "Антон Петров", "18ИТ-3с", 8.5, 368.12};
		students[2] = { "Анастасия Смирнова", "18ИТ-3с", 7.5, 734.34};
		students[3] = { "Владислав Медведев", "18ИТ-3с", 5.6, 890.53};
		students[4] = { "Александр Киселев", "18ИТ-3с", 9.5, 245.43};
	}

	void OutputStruct()
	{
		for (int i = 0; i < 5; i++)
		{
			students[i].ShowStruct();
		}
	}
	float minSalary = 330;

	void FindStudentMinIncome()
	{
		cout << "\nФамилии студентов, родители которых имеют низкий доход: " << endl;
		for (int i = 0; i < 5; i++)
		{
			if ((students[i].income) < (minSalary * 2))
			{
				cout <<students[i].FIO << "\n";
			}

		}
	}
};
