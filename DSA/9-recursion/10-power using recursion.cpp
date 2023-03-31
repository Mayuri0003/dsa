#include<iostream>
#include <stdio.h>
using namespace std;

int pow(int m,int n){
if(n==0){
    return 1;
}
else{
    return m*pow(m,n-1);
}
};
//the above function takes much space

int pow1(int m,int n){
    if (n == 0)
    {
        return 1;
    }
    if(n%2==0){
        return pow1(m*m,n/2);
    }
    else{
        return m*pow1(m*m,(n-1)/2);
    }

};
int main(){
    cout<<pow(2,5)<<endl<<pow1(2,5)<<endl;

    return 0;

};