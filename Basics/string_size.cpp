// Remember there is a null stored in at the end of a string always

#include<iostream>
using namespace std;

int main()
{
    char a[]="mayank";
    char nums[]="123";
    int b = nums [0] - '0'; // Typecasting by subtracting the ASCII value of the first character ie 0
    cout <<  b;
    // int val = int(nums[0])+int(nums[1]); //typecasting
    // cout << val;
    // cout << sizeof(a)/sizeof(a[0]-1);
}