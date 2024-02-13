#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>


using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к третьей лекции. Двумерные массивы и алгоритмы над ними" << endl;


    while (true)
    {
        cout << "1: Банкетный стол." << endl;
        cout << "2: Крестики-нолики" << endl;
        cout << "3: Матрицы" << endl;
        cout << "4: Умножение матрицы на вектор" << endl;
        cout << "5: Пупырка" << endl;
        cout << "6: Проход змейкой" << endl;
        cout << "7: Почти «Майнкрафт" << endl;
        cout << "8: Морской бой" << endl;
        cout << "Введите число от 1 до 8 или что-то другое для выхода: ";

        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Задача 1 Банкетный стол." << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Задача 2 Крестики-нолики" << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Задача 3 Матрицы" << endl;
            task3();
            _getch();
            system("cls");
        }

        else if (task == 4) {
            system("cls");
            cout << "Задача 4 Умножение матрицы на вектор" << endl;
            task4();
            _getch();
            system("cls");;
        }

        else if (task == 5) {
            system("cls");
            cout << "Задача 5 Пупырка" << endl;
            task5();
            _getch();
            system("cls");
        }

        else if (task == 6) {
            system("cls");
            cout << "Задача 6 Проход змейкой" << endl;
            task6();
            _getch();
            system("cls");
        }

        else if (task == 7) {
            system("cls");
            cout << "Почти «Майнкрафт" << endl;
            task7();
            _getch();
            system("cls");
        }

        else if (task == 8) {
            system("cls");
            cout << "Морской бой" << endl;
            task8();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }
}