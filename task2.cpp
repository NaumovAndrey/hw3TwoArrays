#include "pch.h"
#include "iostream"
#include <string>

using namespace std;


/*Крестики-нолики*/

const int ROW = 3;
const int COLUMN = 8;

void printConsole(char arr[ROW][COLUMN], string text) {
	cout << text << endl;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void task2() {
	char ticTacToe[ROW][COLUMN]	{};

	for (int row = 0; row < ROW; ++row) {
		for (int column = 0; column < COLUMN; ++column) {
			ticTacToe[row][column] = 'Z';
		}
	}

	printConsole(ticTacToe, "Поле");
}
