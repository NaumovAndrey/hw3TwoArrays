#include "pch.h"
#include "iostream"
#include <string>

using namespace std;


/*��������� ����*/

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
	

	int countTableware = 3; // ���������� ������� �������� �� ������ ��������
	int countDishes = 2; // ���������� ������� �� ������ ��������
	int countChair = 1; // ���������� ������� �� ������ ��������

	int tableware[ROW][PERSON] = { 0 }; // �������
	int dishes[ROW][PERSON] = { 0 }; // ������
	int chair[ROW][PERSON] = { 0 }; // ����

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


	chair[0][4] += 1; // ��������� �� ����� ����� ������� ���� ���� ������� � ����� ������
	tableware[1][2] -= 1; // � �������� ����� �� ������ ���� � ����������� ����������� ���� �������� �����.
	tableware[0][0] -= 1; // ���� �� VIP-������ (�����)---->
	tableware[1][2] += 1; //���������� ����� ������
	dishes[0][0] -= 1; // �������� ������ � VIP-����� ���� ��������� �������,


	printConsole(tableware, "���������� �������� ��������: ");
	printConsole(dishes, "���������� �������: ");
	printConsole(chair, "���������� �������: ");
}


