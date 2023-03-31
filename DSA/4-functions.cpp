#include <iostream>
#include <stdio.h>
using namespace std;
int add(int a,int b){
    int c;
    c=a+b;
    return c;
};

int main(){
    int x=3,y=4,z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;

};

/*parameter passing*/
/*call by value*/
/*

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
};

int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout<<a<<b<<endl;
};

*/


/*call by adress*/

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
};

int main(){
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    cout<<a<<b<<endl;
};

/*call by reference*/
void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
};

int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout<<a<<b<<endl;
};