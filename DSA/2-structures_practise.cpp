#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle{
    int len;
    int bre;
};

int main(){
    struct Rectangle r1 ={13,2};
    r1.len = 12;
    cout<< r1.len<<endl;
    cout << r1.bre << endl;
};
/* its easy to take 4 bites of memory..so taking extra bites for a char when given with integers to make easy is called padding--generaly alotting extra memory even if is not used */