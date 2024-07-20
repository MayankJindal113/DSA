#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char nums[]="123";
    int b = nums [0] - '0'; // Typecasting by subtracting the ASCII value of the first character ie 0
    // cout <<  b<<endl; 

    string str = "123";
    int len_str = sizeof(str)/sizeof(str[0]); // This is not valid for strings, only use for arrays

    int len_str2 = str.size();
    // nums.size(); Not allowed
    int len = sizeof(nums)/sizeof(*nums);
    // cout << len << endl;
    // cout << len_str2  << endl;
    
    //  HERE THE LEN IS RETURNED TO BE 4, AS THE CHAR BY DEFAULT STORES, A NULL AT THE END
    // WHILE IN CASE OF std::string, IT IS NOT TRUE.


    string nayistr= "abc+-*123 ";
    sort(nayistr.begin(),nayistr.end());
    
    // HERE THE CHARACTERS, GET SORTED ON THE BASIS OF THEIR ASCII CODES : CHECK ASCII TABLE FOR REFERENCE: 
    // AND THE ASCII OF NUMERIC CHARACTERS ; LIKE 0,1,2,3,4,5,... ARE NOT EQUAL TO THEIR NUMERIC VALUE;
    for(int i= 0 ; i<nayistr.size();i++){
    cout <<nayistr[i]<<endl;
    }
}