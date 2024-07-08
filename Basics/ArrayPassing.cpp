// Passing array to function 
// Dynamically allocate memory to array

// arr[i]==*(arr+1)

#include<iostream>
using namespace std;
int* sum (int arr[])
{   int i=0,sum=0;
    while(i<4)
    {
        sum+=arr[i++];
    }
    return arr;
}

int main()
{
    int a []={2,1,4,5};
    int *p =sum(a);
    cout<<"First element of array :"<<p[0]<<endl;

    int *mem =  new int [4];
    int s=4;

    for (int i = 0 ; i<s; i++)
    {
        mem[i]= i;
    }
    for (int i = 0 ; i<s; i++)
    {
        cout<<mem[i]<<endl;
    }
    delete [] mem;
    // for (int i = 0 ; i<s; i++)
    // {
    //     cout<<mem[i];
    // }
}