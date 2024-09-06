#include<iostream>
#include<string>
#include<limits.h>
using namespace std;

std::string r(){

    return "How are you" ;
}
int main()
{
    cout<<r();
    int a=INT_MAX;
    a++; // THis is not valid as a is already at the maximum value
    cout <<a;
    int b = INT_MIN;
    cout << b<<endl; //  a=b as after increment above the max value, it goes to its min value        
    a = 2;

    // Typecasting form int type to double type
    double v =a/3;
    double q = 1.0*a/3;  // or  (double) a/3
    cout << v<< " "<<q;
}