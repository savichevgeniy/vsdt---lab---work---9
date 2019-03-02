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

		cout << setw(35) <<"��������� ��������" << endl;
		cout << endl;
		cout << setw(10) << "���" << setw(10) << "�������" << setw(10) << "�����" << setw(10) << setw(10) <<  "����� ������" << endl;
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
		Name[0] = { "������", "������", 11, 'A'};
		Name[1] = { "�����", "������", 10, '�' };
		Name[2] = { "���������", "��������", 1, '�' };
		Name[3] = { "���������", "��������", 3, 'A' };
		Name[4] = { "���������", "�������", 6, 'A' };
		Name[5] = { "������", "��������", 11, '�' };
		Name[6] = { "������", "�������", 9, 'A' };
		Name[7] = { "�������","�������", 10, '�' };
		Name[8] = { "�����", "��������", 11, 'A' };
		Name[9] = { "������", "������", 3, '�' };
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
		cout << "\n������� ������� ���������� ��� � �������:" << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = i + 1;j < 10; j++)
			{
				if ((Name[i].Name == Name[j].Name) && (Name[i].SurName == Name[j].SurName))
				{
					cout << Name[i].Name << " " << Name[i].SurName << " " << Name[i].klass << Name[i].Nameklass << " � ";
					cout << Name[j].Name << " " << Name[j].SurName << " " << Name[j].klass << Name[j].Nameklass << endl;
				}
			}
		}
	}

};