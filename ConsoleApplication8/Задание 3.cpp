#include "mylib.h"
#include <iostream>
#include <stdio.h>

using namespace std;
/// <summary>
/// //////////////// TASK 3
/// </summary>
/// <param name="num"></param>
/// <param name="size"></param>

void SwapINT(int* num, int size)
{
   

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = (size - 1); j > i; j--)
        {
            if (num[j - 1] > num[j]) // если текущий элемент меньше предыдущего
            {
                int temp = num[j - 1]; // меняем их местами
                num[j - 1] = num[j];
                num[j] = temp;
            }
        }
    }
}

#define N 4

int printbubble()
{
    int numbers[N];
    for (size_t i = 0; i < N; i++)
    {
        std::cin >> numbers[i];
    }
   

    for (int i = 0; i < N; i++)
    {
        printf("numbers[%d] = ", i);
        scanf("%d", &numbers[i]);
    }
    SwapINT(numbers, N);

    for (int i = 0; i < N; i++)
        printf("%d ", numbers[i]);
    getchar(); getchar();
    return 0;
}