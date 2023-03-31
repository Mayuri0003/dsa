#include<iostream>
#include<stdio.h>
using namespace std;
//TYPES OF RECURSION
/*
1.HEAD RECURSION
2.TAIL RECURSION
3.TREE RECURSION
4.INDIRECT RECURSION
5.NESTED RECURSION
*/

//tail recursion(no statement after fun calling itself)

void fun(int n){
    if(n>0){
        cout<<n;
        fun(n-1);
    }
};

//every recursive function can be written into a loop and vice versa
//loop function of above recursive fun
void fun(int n){
    while(n>0){
        cout<<n;
        n--;
    }
};
//time complexity(taken)  by both codes is same (order of n)
//space complexity taken by recursion is n and while loop is 1
