#include "pch.h"
#include "iostream"
#include <string>

using namespace std;


/*Крестики-нолики*/

const int ROW = 3;
const int COLUMN = 3;

char ticTacToe[ROW][COLUMN]{};

void drawBoard(char ticTacToe[ROW][COLUMN]) {
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COLUMN; ++j) {
			cout << ticTacToe[i][j];
			if (j < COLUMN - 1) {
				cout << "|";
			}
		}
		cout << std::endl;
		if (i < ROW -1) {
			for (int k = 0; k < COLUMN; ++k) {
				std::cout << "--" ;
			}
			cout << endl;
		}
	}
}

void initTicTacToe() {
	for (int row = 0; row < ROW; ++row) {
		for (int column = 0; column < COLUMN; ++column) {
			ticTacToe[row][column] = ' ';
		}
	}
	drawBoard(ticTacToe);
}

void checkingCapacity() {

}

void winning() {

}

void gameUser() {
	while (true) {
		int x, y;
		cout << "Ход первого игрока";
		cin >> x >> y;
		checkingCapacity();
		ticTacToe[x][y] = 'X';
		drawBoard(ticTacToe);
		winning();

		cout << "Ход второго игрока";
		cin >> x >> y;
		checkingCapacity();
		ticTacToe[x][y] = 'O';
		drawBoard(ticTacToe);
		winning();
	}
}

void task2() {
	initTicTacToe();
	gameUser();
}
