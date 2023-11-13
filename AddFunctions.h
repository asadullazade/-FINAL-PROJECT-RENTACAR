#pragma once
#include <iostream>
using namespace std;
Car* AddNewCar(Car* rentcar, int* length1) {
	system("cls");
	Car* NewCar = new Car[*length1 + 1];
	for (int i = 0; i < *length1; i++)
	{
		NewCar[i] = rentcar[i];
	}
	NewCar[*length1].num = *length1 + 1;
	cout << "\t\t\t\t������� ������ ����������: \n";
	cin >> NewCar[*length1].model;
	cout << "\t\t\t\t������� ����� ����������: \n";
	cin >> NewCar[*length1].marka;
	cout << "\t\t\t\t������� ���� ����������: \n";
	cin >> NewCar[*length1].color;
	cout << "\t\t\t\t������� ����� ����������: \n";
	cin >> NewCar[*length1].number;
	cout << "\t\t\t\t������� ��� ����������: \n";
	cin >> NewCar[*length1].year;
	*length1 += 1;
	cout << "\n\t\t\t\t����� ���������� ������� ��������!\n";
	return NewCar;

}

client* AddNewClient(client* clients, int* length2) {
	system("cls");
	client* NewClient = new client[*length2 + 1];
	for (int i = 0; i < *length2; i++)
	{
		NewClient[i] = clients[i];
	}
	NewClient[*length2].num = *length2 + 1;
	cout << "\t\t\t\t������� ��� ������ �������: \n";
	cin >> NewClient[*length2].name;
	cout << "\t\t\t\t������� ������� ������ �������: \n";
	cin >> NewClient[*length2].lastname;
	cout << "\t\t\t\t������� �������� ������ �������: \n";
	cin >> NewClient[*length2].surname;
	*length2 += 1;
	cout << "\n\t\t\t\t����� ������ ������� ��������!\n";
	return NewClient;
}

contract* NewContract(Car* rentcar, contract* contracts, int* length1, int* length3) {
	system("cls");
	contract* NewContracts = new contract[*length3 + 1];
	int Car;
	int day;
	cout << "|  No  |    �����        |     ������     |   ����   |   �����   |   ���   |   ����   |\n";
	cout << "_______________________________________________________________________________________\n";

	for (size_t i = 0; i < *length1; i++)
	{
		cout << "|  No  |    �����        |     ������     |   ����   |   �����   |   ���   |   ����   |\n";
		cout << "_______________________________________________________________________________________\n";
		cout << "|  " << rentcar[i].num << "   |    " << setw(13) << left << rentcar[i].model << "|     " << setw(10) << left << rentcar[i].marka << "|   " << setw(8) << left << rentcar[i].color << "|   " << setw(9) << left << rentcar[i].number << "|   " << setw(7) << left << rentcar[i].year << "|   " << setw(8) << left << rentcar[i].price << "|" << endl;
	}
	for (int i = 0; i < *length3; i++)
	{
		NewContracts[i] = contracts[i];
	}
	NewContracts[*length3].num = *length3 + 1;
	cout << "\n��e���� ���:\n";
	cin >> NewContracts[*length3].name;
	cout << "������� �������:\n";
	cin >> NewContracts[*length3].lastname;
	cout << "������� ��������:\n";
	cin >> NewContracts[*length3].surname;
	cout << "������� ����� ����������:\n";
	cin >> Car;
	NewContracts[*length3].carNum = Car;
	cout << "�� ������� ���� ������ ���������� ����������:\n";
	cin >> day;
	*length3 += 1;
	cout << "�� ������� ������:\n";
	for (size_t i = 0; i < *length1; i++)
	{
		if (Car == rentcar[i].num) {
			cout << "|  No  |    �����        |     ������     |   ����   |   �����   |   ���   |   ����   |\n";
			cout << "_______________________________________________________________________________________\n";
			cout << "|  " << rentcar[i].num << "   |    " << setw(13) << left << rentcar[i].model << "|     " << setw(10) << left << rentcar[i].marka << "|   " << setw(8) << left << rentcar[i].color << "|   " << setw(9) << left << rentcar[i].number << "|   " << setw(7) << left << rentcar[i].year << "|   " << setw(8) << left << rentcar[i].price << "|" << endl;
		}
	}
	cout << "\n���� ������� ������������� �� ����������:\n";

	int result = day * rentcar[Car - 1].price;
	NewContracts[*length3 - 1].allprice = result;
	cout << result << endl;
	return NewContracts;
}