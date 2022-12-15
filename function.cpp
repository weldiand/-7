#include "function.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>

int sumDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sum(int** a, int k, int m)
{
    int su = 0;
    for (int i = 0; i < m; i++)
        su += abs(a[k][i]);
    return su;
}
void sort(int** x, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sum(x, j, m) > sum(x, j + 1, m))
            {
                int* t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }

}
