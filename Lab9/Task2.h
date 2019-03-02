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
		cout << setw(17) << "���" << setw(22) << "������" << setw(25) << "������� ����" << setw(15) << "�����" << endl;
		OutputStruct();
		FindStudentMinIncome();
	}

private:
	

	Students students[5];
	void FillStruct()
	{
		students[0] = { "������ ������", "18��-3�", 8.3, 659.22 };
		students[1] = { "����� ������", "18��-3�", 8.5, 368.12};
		students[2] = { "��������� ��������", "18��-3�", 7.5, 734.34};
		students[3] = { "��������� ��������", "18��-3�", 5.6, 890.53};
		students[4] = { "��������� �������", "18��-3�", 9.5, 245.43};
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
		cout << "\n������� ���������, �������� ������� ����� ������ �����: " << endl;
		for (int i = 0; i < 5; i++)
		{
			if ((students[i].income) < (minSalary * 2))
			{
				cout <<students[i].FIO << "\n";
			}

		}
	}
};
