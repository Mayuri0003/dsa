#include <stdio.h>
#include <iostream>
using namespace std;
double e(int x,int n){
    static double s;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return e(x,n-1);
    }
};
//taylors series using iteration

double e2(int x, int n){
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++){
        num=num*x;
        den=den*i;
        s=s+num/den;
    }

    return s;
};

int main(){
    cout<<e2(2,5);
    return 0;
};