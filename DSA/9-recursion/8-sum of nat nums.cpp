#include<iostream>
#include<stdio.h>
using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
        
    }
    else{
        return 0;
    }


};
int sum(int n){
    int su=0;
    int i;
    for(i=1;i<=n;i++)
        su=su+i;
    
    return su;
};
int main(){
    cout<<fun(5)<<endl;
    cout<<sum(5);
    return 0;
};