#include <iostream>
#include <stdio.h>

using namespace std;
///////////////////////////////////////////////////////////// TASK2
#define RANGE (zero <= x && x <= max)//helpmeplscpp

int main()
{
    int a, b;
    cout << "Введите максимальное число диапазона от 0 до какого хотите:\n ";
    cin >> a;
    cout << "Введите число :\n";
    cin >> b;

    (0, a, b) ? cout << "True\n" : cout << "False\n";
}
// ПОЧЕМУ ОНО РАБОТАЕТ?