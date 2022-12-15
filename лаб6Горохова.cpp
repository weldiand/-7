#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include "функция.h"
using namespace std;

int main()
{
    int n, dig;
    cout << "n="; cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "элемент:"; cin >> dig;
            a[i][j] = dig;
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << "\n";
    }

    int mins = 0, maxs = 0;
    int max = a[0][0];
    int min = a[0][0];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxs = sumDigits(a[i][j]);

            }
            if (a[i][j] < min)
            {
                min = a[i][j];
                mins = sumDigits(a[i][j]);
            }
        }

        if (mins == maxs)
            sort(a, n, n);
    }
    for (int i = 0; i < n; i++)
    {
        int summ = 0;
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
            summ += a[i][j];
        }
        cout << summ;
        cout << endl;
    }

    return 0;
}

