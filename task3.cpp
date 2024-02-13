#include "pch.h"
#include "iostream"

const int SIZE = 4;

void convertToDiagonal(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (i != j) {
                matrix[i][j] = 0; // �������� �������� ��� ������� ���������
            }
        }
    }
}

bool areMatricesEqual(int matrixA[SIZE][SIZE], int matrixB[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matrixA[i][j] != matrixB[i][j]) {
                return false; // ������� �� �����
            }
        }
    }
    return true; // ������� �����
}


/**/

void task3() {
    int matrixA[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int matrixB[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // �������� ������ �� ���������
    if (areMatricesEqual(matrixA, matrixB)) {
        std::cout << "������� �����!" << std::endl;

        // �������� ���� �� ������ ��� �������������� � ������������
        // �������������� ������ �������
        convertToDiagonal(matrixA);

        // ������� ��������������� �������
        std::cout << "������������ �������:" << std::endl;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                std::cout << matrixA[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "������� �� �����." << std::endl;
    }
}
