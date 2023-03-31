#include <iostream>
#include <stdio.h>
using namespace std;
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y = temp;
}
void Bubble(int A[],int n){
    int i,j,flag=0;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
};
int main(){
    int A[]={1,4,5,6,2,3,9,8,7,10},n=10,i;
    Bubble(A,n);
    for(i=0;i<10;i++){
        cout<<A[i]<<endl;
    }
    return 0;

}