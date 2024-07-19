// Last occurance of a char using recursion
// Reverse a string recursively and give the time complexity
// Check if a given string is a palindrome
// **Remove all the occurances of a subarray from the given string/array 
//  LEET CODE - 1910 - SEE BOTH Recursive and iterative solutions
//  Print all the subarray/substrings of a given array/string

#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

int lastOccurance(char*a, char b,int &i){
    if (i <0 ||  a[i]==b)
    {
        return i;
    }    
    // if (a[i]==b)
    // {
    //     return i;
    // }  
    i--;
    return lastOccurance (a, b, i);
}

void reverseS(char*a, int &c, int &d){
    if (c>=d) return;
    swap (a[c],a[d]);
    c=c+1;d=d-1;

    reverseS(a,c,d);
}

bool palindromeCheck(string &a, bool &palindrome , int lastIndex, int i ){
    if(i >=lastIndex){
        return palindrome;
    }
    if (a[i]!=a[lastIndex]){
        palindrome = false;
        return palindrome;
    }
    i++;
    return palindromeCheck(a, palindrome, lastIndex-1, i);
}

// ITERATIVE SOLUTION :
string removeOccurance(string s, string part){
    int index = s.find(part);
    
    while(index!= string::npos){
        s= s.erase(index, part.size()-1);
        index = s.find(part);
    }
    return s;
}

// Find all the subarrays of a given array
void subArray(int*a, int &i , int &sizeofarray){
    if(i >= sizeofarray){return ;}

    for (int j = i ; j < sizeofarray; j++){
        // ans[i][j] = a[j];
        for (int k=i; k<=j ; k++)
        {cout << a[k]<<" ";}cout<<endl;
    }
    i++;
    subArray(a,  i , sizeofarray);
}

int main()
{
    int a[]{3,1,6,8,4,3,1,3,2,3,1,8};
    int arr []{1,2,3,4,5,6};
    int s = sizeof(arr)/sizeof(*arr);  // Length of the array
    vector<vector<int>>ans;
    int i =0;
    subArray(arr, i, s);
}




    //  RECURSIVE SOLUTION for remove all Occurances of a string :
    // string removeOccurance(string &s,string &part, int &i){
    // int len_s = s.size();int len_part = part.size();
    // if ((len_s- len_part < i )){return s;}
    // bool found = true;
    // for (int j =i ; j<len_part+i; j++){
    //     if(s[j]!= part[j-i]){found = false; break;}
    // }
    // if(found== true){
    //     s.erase(i, len_part);
    //     i = -1;
    //     // len_s = s.size()-1;
    // }
    // i++;
    // return removeOccurance(s, part, i);
    // }


    // Palindrome Check:
    // string str ;
    // cin >> str;
    // int end = str.size()-1;
    // bool pal= true;
    // int i = 0 ;
    // if (palindromeCheck(str, pal, end, i) ==true) {
    //     cout << "Yes it is a palindrome";
    // } else {
    //     cout << "Not a palindrome";
    // }


    // int lastIndex= sizeof(a)/sizeof(*a) - 2; // The last character in a char array is null
    // int lastI = strlen(a);  // Gives the length
    // cout<< lastI;
    // char a []= "g00db0i$$";


    // ReverseSTRING : 
    // char b = 'b';
    // int c= 0, d= sizeof(a)/sizeof(*a)-2;
    // cout<<"Calling function : ";
    // reverseS(a,c,d);
    // d= sizeof(a)/sizeof(*a)-2;
    // cout<<"Reversed String : "<<endl;
    // for (int i = 0; i <= d; i ++)
    // {
    //     cout<< a[i];
    // }


    // int i = (sizeof(a)/sizeof(a[0]))-2;
    // cout << (find(a, b,i)>=0 ? "Last occurance at the index : "<<i : "Not found");
    // cout<<i;
    // if (find(a, b,i)>=0)
    // {
    //     cout<<"Last occurance at the index : "<<i ;
    // }
    // else{
    //     cout << "Not found";
    // }