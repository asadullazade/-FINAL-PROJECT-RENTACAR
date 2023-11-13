#pragma once
#include <iostream>
using namespace std;

void showAll(Car* rentcar, client* clients, contract* contracts, int length1, int length2, int length3) {
	system("cls");
	int option;
	cout << "\n\t\t\t\t������� ��:\n \t\t\t\t1 - ��� ������ �����������\n"
		<< "\t\t\t\t2 -  ��� ������ �������� \n"
		<< "\t\t\t\t3 - ��� ������ ����������\n";
	cin >> option;
	if (option == 1) {
		cout << "|  No  |    �����        |     ������     |   ����   |   �����   |   ���   |   ����   |\n";
		cout << "_______________________________________________________________________________________\n";

		for (size_t i = 0; i < length1; i++)
		{
			cout << "|  " << rentcar[i].num << "   |    " << setw(13) << left << rentcar[i].model << "|     " << setw(10) << left << rentcar[i].marka << "|   " << setw(8) << left << rentcar[i].color << "|   " << setw(9) << left << rentcar[i].number << "|   " << setw(7) << left << rentcar[i].year << "|   " << setw(8) << left << rentcar[i].price << "|" << endl;
		}
	}


	else if (option == 2) {
		cout << "|  No  |    ���           |     �������     |   ��������   |\n";
		cout << "____________________________________________________________\n";
		for (size_t i = 0; i < length2; i++)
		{
			cout << "|  " << clients[i].num << "   |    " << setw(15) << left << clients[i].name << "|   " << setw(15) << left << clients[i].lastname << "|   " << setw(10) << left << clients[i].surname << "|" << endl;
		}
	}
	else if (option == 3) {
		cout << "|  No  |    ���           |     �������     |   ��������   |   �������������   |   ����� ����   |\n";
		cout << "_________________________________________________________________________________________________\n";
		for (size_t i = 0; i < length2; i++)
		{
			cout << "|  " << contracts[i].num << "   |    " << setw(15) << left << contracts[i].name << "|   " << setw(15) << left << contracts[i].lastname << "|   " << setw(15) << left << contracts[i].surname << "|" << setw(15) << left << contracts[i].allprice << "|" << setw(15) << left << contracts[i].carNum << "|" << endl;
		}
	}


}




void SearchInfo(Car* rentcar, int* length1) {
	system("cls");
	int option2;
	bool flag = true;
	cout << "\t\t\t\t�������� ������ ������:\n"
		<< "\t\t\t\t1.�� ������\n"
		<< "\t\t\t\t2.�� �����\n"
		<< "\t\t\t\t3.�� �����\n"
		<< "\t\t\t\t4.�� ������\n"
		<< "\t\t\t\t5.�� ����\n"
		<< "\t\t\t\t6.�� �������� ���������\n";
	cin >> option2;
	
	if (option2 == 1) {

		char model2[20];
		cout << "\n������� ������ ����������:\n";
		cin >> model2;
		for (int i = 0; i < *length1; i++)
		{
			int result = _strnicmp(model2, rentcar[i].model, strlen(model2));
			if (result == 0) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
	else if (option2 == 2) {
		char marka2[20];
		cout << "\n������� ����� ����������:\n";
		cin >> marka2;
		for (int i = 0; i < *length1; i++)
		{
			int result = _strnicmp(marka2, rentcar[i].marka, strlen(marka2));
			if (result == 0) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
	else if (option2 == 3) {
		char color2[20];
		cout << "\n������� ���� ����������:\n";
		cin >> color2;
		for (int i = 0; i < *length1; i++)
		{
			int result = _strnicmp(color2, rentcar[i].color, strlen(color2));
			if (result == 0) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
	else if (option2 == 4) {
		char number2[20];
		cout << "\n������� ����� ����������:\n";
		cin >> number2;
		for (int i = 0; i < *length1; i++)
		{
			int result = _strnicmp(number2, rentcar[i].number, strlen(number2));
			if (result == 0) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;
				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
	else if (option2 == 5) {
		int Maxyear;
		int Minyear;
		cout << "\n������� ����������� ��� ����������:\n";
		cin >> Minyear;
		cout << "\n������� ������������ ��� ����������:\n";
		cin >> Maxyear;
		for (int i = 0; i < *length1; i++)
		{

			if (Minyear < rentcar[i].year && Maxyear > rentcar[i].year) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
	else if (option2 == 6) {
		int Maxprice;
		int Minprice;

		cout << "\n������� ����������� ���� ������:\n";
		cin >> Maxprice;
		cout << "\n������� ������������ ���� ������:\n";
		cin >> Minprice;
		for (int i = 0; i < *length1; i++)
		{
			if (Minprice > rentcar[i].price && Maxprice < rentcar[i].price) {
				
				cout << "|  " << rentcar[i].num << "   |     " << rentcar[i].model << "      |      " << rentcar[i].marka << "       |   " << rentcar[i].color << "   |   " << rentcar[i].number << "     |   " << rentcar[i].year << "   |   " << rentcar[i].price << "   |" << endl;
				flag = false;
			}

		}
		if (flag)
			cout << "\n���������� �� ������\n";
	}
}