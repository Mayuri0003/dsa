#include <iostream>
#include <stdio.h>
using namespace std;
// fibonacci series using iteration
int fib(int n){
    int t0=0,t1=1,s=0,i;
    if(n<=1){
        return n;
    }
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
};
//fibonacci series using recursion
int fibrec(int n){
    if (n <= 1)
    {
        return n;
    }
    else{
        return fibrec(n - 2) + fibrec(n - 1);
    }
};
//fibonacci series using memoization
int F[10];
int fibrec2(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fibrec2(n-2);
        }
        if (F[n-1]==-1)
        {
            F[n-1]=fibrec2(n-1);
        }
        F[n] = F[n - 2] + F[n - 1];
        return F[n-2]+F[n-1];
    }

};

int main(){
    int i;
    for(i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<fibrec2(6);

};