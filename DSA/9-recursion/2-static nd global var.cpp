#include<iostream>
#include<stdio.h>
using namespace std;
/*A stack is created as , for every call each time a new variable
will be created inside the memory and it'll have its value this
is also know as local variable of a function
Example:*/ 

int fun (int n)
{
    static int x = 0; // static variables in recursion
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d", fun(a));
}
/*
If static variables are inside recursive function don’t show
        them in each tracing tree write them in global or
    outside
        variable and maintain a single copy of it int x = 0; // global variable in recursion
        */
int x=0;
int fun(int n)
{
    if (n > 0)
    {
        x++ ;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d", fun(a));
}