#include <iostream>
#include <stdio.h>
using namespace std;
void fun(int *a)
{
    cout << sizeof(a) / sizeof(int) << endl;
};

int main()
{
    int a[] = {2, 4, 6, 8, 9};
    int n = 5;
    fun(a);
    for (int x : a)
        cout << x << " ";
    return 0;
};