#include "pch.h"
#include "iostream"
#include <string>

using namespace std;


/*Ѕанкетный стол*/

const int ROW = 2;
const int PERSON = 12;

void printConsole(int arr[ROW][PERSON], string text) {
	cout << text << endl;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < PERSON; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void task1() {
	

	int countTableware = 3; // количество стоовых приборов на одного человека
	int countDishes = 2; // количество тарелок на одного человека
	int countChair = 1; // количество стульев на одного человека

	int tableware[ROW][PERSON] = { 0 }; // приборы
	int dishes[ROW][PERSON] = { 0 }; // посуда
	int chair[ROW][PERSON] = { 0 }; // стул

	for (int row = 0; row < ROW; ++row) {
		for (int person = 0; person < PERSON; ++person) {
			tableware[row][person] = countTableware;
			dishes[row][person] = countDishes;
			chair[row][person] = countChair;
		}
	}

	tableware[0][0] += 1;
	tableware[1][0] += 1;

	dishes[0][0] += 1;
	dishes[1][0] += 1;


	chair[0][4] += 1; // ѕришедша€ на п€тое место первого р€да дама привела с собой ребЄнка
	tableware[1][2] -= 1; // — третьего места во втором р€ду в неизвестном направлении была украдена ложка.
	tableware[0][0] -= 1; // ќдна из VIP-персон (люба€)---->
	tableware[1][2] += 1; //поделилась своей ложкой
	dishes[0][0] -= 1; // официант забрал у VIP-гост€ одну десертную тарелку,


	printConsole(tableware, " оличество столовых приборов: ");
	printConsole(dishes, " оличество тарелок: ");
	printConsole(chair, " оличество стульев: ");
}


