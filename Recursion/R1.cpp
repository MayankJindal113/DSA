// Recursion - Bigger problem ka solution depends upon a smaller similar problem with same time complexity
// HEad vs Tail Recursion
// Fibonacci, factorial, counting, 
// 
#include<iostream>
#include<array>
using namespace std;

int fact(int n){
    int val=n;
    if (n==0)
    {
        return 1;
    }
    int chotiProblemans= fact(n-1);
    int badiProblemans= n*fact(n-1);

    // val = val*fact(n-1);
    return badiProblemans;
}

void printHeadRecursion(int a)
{
    if (!a)
    {   cout<<a<<endl;
        return ;
    }
    printHeadRecursion(a-1);
    cout<<a<<endl;
}


void printTailRecursion(int a)
{
    if (!a)
    {   cout<<a<<endl;
        return ;
    }
    cout<<a<<endl;
    printTailRecursion(a-1);
}

int fibonacci (int n) //n represents the number of terms
{
    if (n==0)
    {   cout<<"Invalid input";
        return -1;
    }
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {   
        return 1;
    }
    int num;
    num=fibonacci (n-1)+fibonacci (n-2);
    // cout<<num<<endl;
    return num;
}

int minEle(int a[],int l,int i)
{   
    if (i==l)   return a[i-1];

    int min = a[i-1];
    return (min = min > minEle(a,i++,i) ? minEle(a,i++,i): min);
    
    // int min=*a;
    // if (!a)
    // {
    //     return min;
    // }
    // min = min > minEle(*a+1)
    
}
int minEle(int a[],int l)
{   
    if (l==1) return a[l-1];
    int min = minEle (a, l-1);
    if (min < a[l-1]) return min ;
    else return a[l-1];   
}

int main()
{
    // int a=5;
    // print(a);
    // cout<<fact(5);
    // cout<<"Head Recursion\n";
    // printHeadRecursion(5);
    // cout<<"Tail Recursion\n";
    // printTailRecursion(5);
    // cout<<fibonacci(8);

    int a[] = {5,10,3,7,9,11};

    int elem = minEle(a,sizeof(a)/sizeof(a[0]));
    cout<<elem;

}