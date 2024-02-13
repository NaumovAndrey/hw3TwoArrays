#include "pch.h"
#include "iostream"

const int SIZE = 4;

void multiplyVectorByMatrix(int matrixA[SIZE][SIZE], int vectorB[SIZE], int resultVectorC[SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        resultVectorC[i] = 0;
        for (int j = 0; j < SIZE; ++j) {
            resultVectorC[i] += matrixA[i][j] * vectorB[j];
        }
    }
}

void task4() {
    int matrixA[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int vectorB[SIZE] = { 1, 2, 3, 4 };
    int resultVectorC[SIZE];

    // ��������� ������� �� �������
    multiplyVectorByMatrix(matrixA, vectorB, resultVectorC);

    // ����� ��������������� �������
    std::cout << "��������� ��������� ������� �� �������:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << resultVectorC[i] << " ";
    }
    std::cout << std::endl;
}
