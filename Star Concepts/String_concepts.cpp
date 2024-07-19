#include<iostream>
#include<string>
using namespace std;

int main()
{
    char nums[]="123";
    int b = nums [0] - '0'; // Typecasting by subtracting the ASCII value of the first character ie 0
    cout <<  b<<endl; 

    string str = "123";
    int len_str = sizeof(str)/sizeof(str[0]); // This is not valid for strings, only use for arrays

    int len_str2 = str.size();
    // nums.size(); Not allowed
    int len = sizeof(nums)/sizeof(*nums);
    cout << len << endl;
    cout << len_str2;
    
    //  HERE THE LEN IS RETURNED TO BE 4, AS THE CHAR BY DEFAULT STORES, A NULL AT THE END
    // WHILE IN CASE OF std::string, IT IS NOT TRUE.
}