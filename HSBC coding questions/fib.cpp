// Fibonacci Series : 0,1,1,2,3,5,8,13,21,34,55,89,...
#include<iostream>
using namespace std;

int ite_fib(int n) {
  
    int a = 0, b = 1, c;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

}

int rec_fib(int n)  // Complexity : O(2^n)
{
    if (n==0) { return -1;}
    else if (n==1){return 0;}
    else if (n==2){return 1;}

    int c = rec_fib(n-1) + rec_fib(n-2);
    // cout << c<<endl;
    return c;
}


void swap_no(int a, int b){
    // swap 2 numbers without third variable
    cout << "The original value of a is :"<< a<<endl;
    cout << "The original value of b is :"<< b<<endl;

    a+=b;
    b+=a;
    a=b-a;
    b= b-2*a;
    
    cout << "The updated value of a is :"<< a<<endl;
    cout << "The updated value of b is :"<< b<<endl;


}

int main()
{
    int a=0, b=1, num=7;
    // cout<<a<<b;
    num-=2;

    swap_no(2,6);

    // helper(num, a, b);
    // ite_fib(6);
    // for (int i =0;i<10;i++)
    // {
    //     cout << rec_fib(i+1);
    // }
    // fib(6);
}