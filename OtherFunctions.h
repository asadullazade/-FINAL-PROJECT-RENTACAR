#pragma once
#include <iostream>
using namespace std;

void move(const int length) {
	for (int i = 0; i < length; i++)
	{
		cout << ' ';
	}
}

void File() {
	ofstream outFile;
	outFile.open("(FINAL PROJECT)RENTACARTXT.txt");

	if (outFile.is_open()) {
		outFile << "Writing this to a file.\n";
		outFile.close();
	}
	else {
		cout << "Unable to open file";
	}
}