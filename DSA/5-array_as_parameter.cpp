#include<iostream>
#include<stdio.h>
using namespace std;
void fun(int *a){
    cout<<sizeof(a)/sizeof(int)<<endl;


};

int main(){
    int a[]={2,4,6,8,9};
    int n=5;
    fun(a);
    for(int x:a)
    cout<<x<<" ";
    return 0;

};

/*defining and creating an array*/
int *fun(int size){
    int *p;
    p = new int[size];
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
};

int main(){
    int *ptr,sz=5;
    ptr = fun(sz);
    for (int i = 0; i < sz; i++)
    cout<<ptr[i]<<endl;
};

//working on a struct model(c language)
/*
struct rectangle{
    int length;
    int breadth;
};
void initialize(struct rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
};
int area(struct rectangle r){
    return r.length*r.breadth;
};
void changelength(struct rectangle *r,int l){
    r->length=l;

};
*/
//working on struct in c++
int main(){
    
    int length;
    int breadth;
};

class rectangle
{
    
    int length;
    int breadth;
rectangle( int l, int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return length*breadth;
}
void changelength( int l)
{
   length = l;
}};
 