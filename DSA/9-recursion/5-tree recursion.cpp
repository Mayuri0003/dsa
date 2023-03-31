#include <iostream>
#include <stdio.h>
using namespace std;
//a recursive function is calling itself more than 1 time is called teree recursion

void fun(int n){
    if(n>0){
        cout<<n<<"  ";
        fun(n-1);
        fun(n-1);
    }

};
int main(){
    fun(3);
    return 0;
};
//time complexity is order of 2^n
// 2^(n+1)-1
//space complexity is in order of n