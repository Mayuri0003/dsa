#include <iostream>
#include <stdio.h>
using namespace std;
//all the processing is done at returning time.such are called head recursions

void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n;

    }
   
};
int main()
{
    fun(3);

    return 0;
}

//in while loop
void fun(int n)
{
    int i=1;
    while(i<1){
        cout<<i;
        i++;
    }
};
int main()
{
    fun(3);

    return 0;
}