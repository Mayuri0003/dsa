#include<stdio.h>
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
};
int rec(int n){
    int s=1;
    int i;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    return s;
};

int main(){
    cout<<fact(5);
    cout<<rec(5);
    return 0;
};