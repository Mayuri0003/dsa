#include<iostream>
#include<stdio.h>
using namespace std;
/*
recursion:FUNCTION IS   calling itself

this is an example of simple tail recursion
you can convert it into head recursion by using
fun(n-1);
cout<<n;
in place of 
cout<<n;
fun(n-1);

in void fun
*/
void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n;
        
    }
};
int main(){
    int x=3;
    fun(x);
    return 0;
};

/*  head recursion example*/