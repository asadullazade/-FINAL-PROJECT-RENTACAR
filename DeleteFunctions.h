#pragma once
#include <iostream>
using namespace std;

Car* DeleteCar(Car* rentcar, int* length1) {
	system("cls");
	int op;
	if (*length1 <= 0) {
		cout << "\t\t\t\t��� ����������� ��� ��������.\n" << endl;
		return rentcar;
	}

	int carToDelete;
	cout << "\t\t\t\t������� ����� ����������, ������� ������ �������: \n";
	cin >> carToDelete;

	Car* newCarList = new Car[*length1 - 1];
	int newCarListIndex = 0;


	cout << "\t\t\t\t�� ������������� ������ ������� ���� ����������?\n"
		<< "\t\t\t\t1 - ��\n"
		<< "\t\t\t\t2 - ���\n";
	cin >> op;
	switch (op)
	{
	case 1:
		if (carToDelete <= 0 || carToDelete > *length1) {
			cout << "\t\t\t\t�������� ����� ����������. ����������, ������� ���������� �����.\n" << endl;
			return rentcar;
		}

		for (int i = 0; i < *length1; i++) {
			if (i + 1 != carToDelete) {
				newCarList[newCarListIndex] = rentcar[i];
				newCarListIndex++;
			}
		}
		(*length1)--;
		cout << "\t\t\t\t���������� ��� ������� " << carToDelete << " ������� ������.\n" << endl;
		break;
	case 2:
		cout << "�� �� ������� ����������\n";
		break;
	}

	for (int i = 0; i < *length1; i++) {
		newCarList[i].num = i + 1;
	}

	return newCarList;
}

client* DeleteClient(client* clients, int* length2) {
	system("cls");
	int op;
	if (*length2 <= 0) {
		cout << "\t\t\t\t��� �������� ��� ��������.\n" << endl;
		return clients;
	}

	int clientToDelete;
	cout << "\t\t\t\t������� ����� �������, ������� ������ �������: \n";
	cin >> clientToDelete;

	client* newclientList = new client[*length2 - 1];
	int newclientListIndex = 0;


	cout << "\t\t\t\t�� ������������� ������ ������� ���� ��������?\n"
		<< "\t\t\t\t1 - ��\n"
		<< "\t\t\t\t2 - ���\n";
	cin >> op;
	switch (op)
	{
	case 1:
		if (clientToDelete <= 0 || clientToDelete > *length2) {
			cout << "\t\t\t\t�������� ����� ��������. ����������, ������� ���������� �����.\n" << endl;
			return clients;
		}

		for (int i = 0; i < *length2; i++) {
			if (i + 1 != clientToDelete) {
				newclientList[newclientListIndex] = clients[i];
				newclientListIndex++;
			}
		}
		(*length2)--;
		cout << "\t\t\t\t�������� ��� ������� " << clientToDelete << " ������� ������.\n" << endl;
		break;
	case 2:
		cout << "�� �� ������� ��������\n";
		break;
	}

	for (int i = 0; i < *length2; i++) {
		newclientList[i].num = i + 1;
	}

	return newclientList;
}


contract* DeleteContract(contract* contracts, int* length3) {
	system("cls");
	int op;
	if (*length3 <= 0) {
		cout << "\t\t\t\t��� �������� ��� ��������.\n" << endl;
		return contracts;
	}

	int contractToDelete;
	cout << "\t\t\t\t������� ����� �������, ������� ������ �������: \n";
	cin >> contractToDelete;

	contract* newcontractList = new contract[*length3 - 1];
	int newcontractListIndex = 0;


	cout << "\t\t\t\t�� ������������� ������ ������� ���� ��������?\n"
		<< "\t\t\t\t1 - ��\n"
		<< "\t\t\t\t2 - ���\n";
	cin >> op;
	switch (op)
	{
	case 1:
		if (contractToDelete <= 0 || contractToDelete > *length3) {
			cout << "\t\t\t\t�������� ����� ��������. ����������, ������� ���������� �����.\n" << endl;
			return contracts;
		}

		for (int i = 0; i < *length3; i++) {
			if (i + 1 != contractToDelete) {
				newcontractList[newcontractListIndex] = contracts[i];
				newcontractListIndex++;
			}
		}
		(*length3)--;
		cout << "\t\t\t\t�������� ��� ������� " << contractToDelete << " ������� ������.\n" << endl;
		break;
	case 2:
		cout << "�� �� ������� ��������\n";
		break;
	}

	for (int i = 0; i < *length3; i++) {
		newcontractList[i].num = i + 1;
	}

	return newcontractList;
}