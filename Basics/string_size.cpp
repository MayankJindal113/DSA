// Remember there is a null stored in at the end of a character array always but not a string (C++)

//  stoi, to_string functions
//  To convert stoi : string to int
//  int to_string

#include<iostream>
#include <string>
using namespace std;

int main()
{
    // char a[]="mayank"; // the length of this char array is 6 + 1 bcz of the null ptr at the end (npos)
    // // Its useful to identify when the end of a char array has been reached 
    // char nums[]="123";
    // int b = nums [0] - '0'; // Typecasting by subtracting the ASCII value of the first character ie 0
    // cout <<  b;
    // int val = int(nums[0])+int(nums[1]); //typecasting
    // cout << val;
    // cout << sizeof(a)/sizeof(a[0]-1);

    int br = 12;
    string c = to_string(br);
    int d = stoi (c);
    cout << c<<endl<< d;

}