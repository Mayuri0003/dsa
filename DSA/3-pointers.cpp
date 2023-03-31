
/*defining a pointer*/
/*pointer have adress*/
#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main1(){
    int a = 10;
    int *p;
    p=&a;
    cout<<a<<endl;
    printf("%d",*p);
    return 0;
}

/*intialising array using pointer*/
int main(){
    int A[5]={2,3,4,5,6};
    int *p;
    p=A;
    printf("%d", *p);
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    return 0;
    
}
/*in case of array pointer acts as name of array*/
/*intialising an array using pointer*/
int main(){
 int *p;
p = new int[2];
p[0]=5; p[1]=8;
/*deleting an array*/ 
delete [ ] p; 
};

/*accesing structure using pointer*/
struct Rect
{
    int length;
    int bre;
};
int main(){
    struct Rect r = {10,5};
    struct Rect *p = &r;

    p->length=20;
    cout<<(*p).length;

};
/*pointer to a structure using malloc function or creating an 
object in heap*/

struct Rect
{
    int length;
    int bre;
};

int main(){
    Rect *p;
    p= new Rect ;
    p->length = 20;
    cout << (*p).length;
};