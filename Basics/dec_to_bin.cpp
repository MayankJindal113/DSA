#include<iostream>
using namespace std;

void print_dec_to_bin(int num){
    if (num)
    {
    int a =num%2;
    print_dec_to_bin(num/2);
    cout << a <<endl;
    }
    else{
        return;
    }
}

void print_bin_to_dec(int num){
    int sum = 0, fac = 1;
    while(num)
    {
        sum +=(num%10)*fac;
        fac*=2;
        num/=10;
    }
    cout << sum;
}

int main()
{
    // int num = 9;
    // print_dec_to_bin(4);
    print_bin_to_dec(01101);
}