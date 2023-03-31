#include <iostream>
using namespace std;

class Array
{

private:
    int *A;
    int size;
    int length;

public:
    Array(int size)
    {
        this->size = size;
        A = new int[size];
    }

    void create()
    {
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " "<<endl;
            ;
        }
    }

    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main()
{

    Array arr(10);
    arr.create();
    arr.display();

    return 0;
}
/* array in c*/
/*
#include <stdio.h> 
struct Array{
    int *A;
    int size;
    int length;
};

int main(){
    struct Array arr;
    int n;
    printf("enter size of an array");
    scanf("%d",&arr.size);
    A = (int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("enter array length");
    scanf("%d",&n);
    printf("enter all elements\n")
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i])
                 
    return 0;
}


*/