//  Bit wise operators :  << : left shift
//  >> : right shift 
//  &  |: and operation 
//  ~ : Not
//  ^ : XOR operation 
// Check for The ques on bit-masking in Recursion :R3_HW_bitmasking.cpp

#include<iostream>
#include<cmath>
#include<typeinfo>
using namespace std;

int main()
{
    //unsigned char a = 5;
    int a = 5;
    cout << (a << 2)<<endl;  // This converts the value of a into an int type
    cout<< a << typeid(a).name()<< endl;   // Here the var a  is still a char as the shift doesnt assign the value to the operand
    a=a<< 2;
    cout << a << typeid(a).name()<< endl;
    // int a = 5; 
    //  Left shifting is equivalent to multiplying the number with 2 ^ the operand at the right : 
    //  a<< b <=> a * 2 ^ b;
    // cout << a * pow (2,1);

}