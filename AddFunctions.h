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
	cout << "\t\t\t\tВведите модель автомобиля: \n";
	cin >> NewCar[*length1].model;
	cout << "\t\t\t\tВведите марку автомобиля: \n";
	cin >> NewCar[*length1].marka;
	cout << "\t\t\t\tВведите цвет автомобиля: \n";
	cin >> NewCar[*length1].color;
	cout << "\t\t\t\tВведите номер автомобиля: \n";
	cin >> NewCar[*length1].number;
	cout << "\t\t\t\tВведите год автомобиля: \n";
	cin >> NewCar[*length1].year;
	*length1 += 1;
	cout << "\n\t\t\t\tНовый автомобиль успешно добавлен!\n";
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
	cout << "\t\t\t\tВведите имя нового клиента: \n";
	cin >> NewClient[*length2].name;
	cout << "\t\t\t\tВведите фамилию нового клиента: \n";
	cin >> NewClient[*length2].lastname;
	cout << "\t\t\t\tВведите отчество нового клиента: \n";
	cin >> NewClient[*length2].surname;
	*length2 += 1;
	cout << "\n\t\t\t\tНовый клиент успешно добавлен!\n";
	return NewClient;
}

contract* NewContract(Car* rentcar, contract* contracts, int* length1, int* length3) {
	system("cls");
	contract* NewContracts = new contract[*length3 + 1];
	int Car;
	int day;
	cout << "|  No  |    Марка        |     Модель     |   Цвет   |   Номер   |   Год   |   Цена   |\n";
	cout << "_______________________________________________________________________________________\n";

	for (size_t i = 0; i < *length1; i++)
	{
		cout << "|  No  |    Марка        |     Модель     |   Цвет   |   Номер   |   Год   |   Цена   |\n";
		cout << "_______________________________________________________________________________________\n";
		cout << "|  " << rentcar[i].num << "   |    " << setw(13) << left << rentcar[i].model << "|     " << setw(10) << left << rentcar[i].marka << "|   " << setw(8) << left << rentcar[i].color << "|   " << setw(9) << left << rentcar[i].number << "|   " << setw(7) << left << rentcar[i].year << "|   " << setw(8) << left << rentcar[i].price << "|" << endl;
	}
	for (int i = 0; i < *length3; i++)
	{
		NewContracts[i] = contracts[i];
	}
	NewContracts[*length3].num = *length3 + 1;
	cout << "\nВвeдите имя:\n";
	cin >> NewContracts[*length3].name;
	cout << "Введите фамилию:\n";
	cin >> NewContracts[*length3].lastname;
	cout << "Введите отчество:\n";
	cin >> NewContracts[*length3].surname;
	cout << "Введите номер автомобиля:\n";
	cin >> Car;
	NewContracts[*length3].carNum = Car;
	cout << "На сколько дней хотите арендовать автомобиль:\n";
	cin >> day;
	*length3 += 1;
	cout << "Вы выбрали машину:\n";
	for (size_t i = 0; i < *length1; i++)
	{
		if (Car == rentcar[i].num) {
			cout << "|  No  |    Марка        |     Модель     |   Цвет   |   Номер   |   Год   |   Цена   |\n";
			cout << "_______________________________________________________________________________________\n";
			cout << "|  " << rentcar[i].num << "   |    " << setw(13) << left << rentcar[i].model << "|     " << setw(10) << left << rentcar[i].marka << "|   " << setw(8) << left << rentcar[i].color << "|   " << setw(9) << left << rentcar[i].number << "|   " << setw(7) << left << rentcar[i].year << "|   " << setw(8) << left << rentcar[i].price << "|" << endl;
		}
	}
	cout << "\nВаша текущая задолженность за автомобтль:\n";

	int result = day * rentcar[Car - 1].price;
	NewContracts[*length3 - 1].allprice = result;
	cout << result << endl;
	return NewContracts;
}