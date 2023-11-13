#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include "CarStruct.h"
#include "ClientStruct.h"
#include "ContractStruct.h"
#include "AddFunctions.h"
#include "DeleteFunctions.h"
#include "SearchAndShowFunctions.h"
#include"OtherFunctions.h"
using namespace std;
struct Car;
struct client;
struct contract;

void showAll(Car* rentcar, client* clients, contract* contracts, int length, int length1, int length3);
Car* AddNewCar(Car* rentcar, int* length);
Car* DeleteCar(Car* rentcar, int* length);
void SearchInfo(Car* rentcar, int* length1);
client* AddNewClient(client* rentcar, int* length1);
void move(const int length);
contract* NewContract(Car* rentcar, contract* contracts, int* length1, int* length3);
client* DeleteClient(client* clients, int* length2);
contract* DeleteContract(contract* contracts, int* length3);
void File();

int main() {
	
	File();
	system("color 62");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	for (int i = 0; i < 75; i++)
	{
		cout << "\t\t\\        /\\        /   |------   |          ----     ----         /\\        /\\         |------     \n";
		cout << "\t\t \\      /  \\      /    |         |         |        |    |       /  \\      /  \\        |            \n";
		cout << "\t\t  \\    /    \\    /     |------   |         |        |    |      /    \\    /    \\       |------       \n";
		cout << "\t\t   \\  /      \\  /      |         |         |        |    |     /      \\  /      \\      |              \n";
		cout << "\t\t    \\/        \\/       |______   |_____     ----     ----     /        \\/        \\     |______         \n\n\n\n";
		Sleep(10);
		move(i);
		cout << "         ___________________\n";
		move(i);
		cout << "        |         |         |\n";
		move(i);
		cout << "        |         |         |\n";
		move(i);
		cout << "        |         |         |\n";
		move(i);
		cout << "________|_________|_________|___________\n";
		move(i);
		cout << "|        ||        ||             |__| |\n";
		move(i);
		cout << "|                                      |\n";
		move(i);
		cout << "|       ____             ____          |\n";
		move(i);
		cout << "|______|    |___________|    |_________|\n";
		move(i);
		cout << "        ----             ----         \n";
		Sleep(10);
		system("cls");
	}

	setlocale(LC_ALL, "Russian");
	int length1 = 5;
	int length2 = 2;
	int length3 = 2;
	Car* rentcar = new Car[length1];
	rentcar[0] = { 1,"BMW","X5","WHITE","11AA111",2004,60 };
	rentcar[1] = { 2,"MERCEDES","e300","BLACK","22BB222",2005,80 };
	rentcar[2] = { 3,"Porshe","taycan","Purple","22CC223",2022,200 };
	rentcar[3] = { 4,"Hyundai","IX35","Pink","22DD555",2005,90 };
	rentcar[4] = { 5,"Lada","2107","BLACK","07FF007",1998,20 };
	client* clients = new client[length2];
	clients[0] = { 1,"Tom","Ford","Eddy" };
	clients[1] = { 2,"Jack","Gates","Lari" };
	contract* contracts = new contract[length3];
	contracts[0] = { 1,"Elli","Toom","Hilphil",200,3 };
	contracts[1] = { 1,"Farid","Alizade","Huseyn",100,4 };
	bool flag = true;

	while (flag)
	{
		int choice{};
		system("cls");

		cout << "\n\n\n\t\t\t\tВыберите операцию:\n"
			<< "\t\t\t\t1. Поиск информации. \n"
			<< "\t\t\t\t2. Добавление информации.\n"
			<< "\t\t\t\t3. Удаление информации.\n"
			<< "\t\t\t\t4. Текущая задолженность конкретного клиента на сегодня.\n"
			<< "\t\t\t\t5. Вывод всей информации на экран\n"
			<< "\t\t\t\t6.Выход\n";
		cin >> choice;
		cout << choice << endl;

		switch (choice)
		{
		case 1:
			SearchInfo(rentcar, &length1);
			system("pause");

			break;
		case 2:
			int op;
			cout << "\n\n\n\t\t\t\tВыберите операцию(для добавления):\n"
				<< "\t\t\t\t1. Новый автомобиль.\n"
				<< "\t\t\t\t2. Новый клиент.\n"
				<< "\t\t\t\t3. Новый контракт.\n";

			cin >> op;
			if (op == 1) {
				rentcar = AddNewCar(rentcar, &length1);
			}
			if (op == 2) {
				clients = AddNewClient(clients, &length2);
			}
			if (op == 3) {
				contracts = NewContract(rentcar, contracts, &length1, &length3);
			}
			system("pause");
			break;
		case 3:
			int op2;
			cout << "\n\n\n\t\t\t\tВыберите операцию(для удаления):\n"
				<< "\t\t\t\t1. Удаление автомобиля.\n"
				<< "\t\t\t\t2. Удаление клиента.\n"
				<< "\t\t\t\t3. Удаление контракта.\n";

			cin >> op2;
			if (op2 == 1) {
				rentcar = DeleteCar(rentcar, &length1);

			}
			if (op2 == 2) {
				clients = DeleteClient(clients, &length2);

			}
			if (op2 == 3) {
				contracts = DeleteContract(contracts, &length3);
			}
			system("pause");
			break;
		case 4:
			NewContract(rentcar, contracts, &length1, &length3);
			system("pause");
			break;
		case 5:
			showAll(rentcar, clients, contracts, length1, length2, length3);
			system("pause");
			break;
		case 6:
			cout << "\n\t\t\t\tВы вышли из программы!\n";
			flag = false;
			break;
		default:
			cout << "\n\t\t\t\tОперация не найдена!\n";
			break;
		}
	}

}









