//taylors series = e^x = 1+x/1! + x^2/2! + x^3/3! +.........+x^n/n!+...........
#include <iostream>
#include <stdio.h>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;

};

int main(){
    cout<<e(3,10);
    return 0;
};