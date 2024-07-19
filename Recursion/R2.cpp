//  VIMP** - If we pass variables/arrays by reference instead of value, it decreases the space complexity
//  VIMP** - Also in some case it may affect time complexity too (TESTED BY MAYANK JINDAL)

// Min/Max element of array, index of a char in string
// A number given print all the digits of it

// Find the min/max of array using recursion
// Find the index of a number in array using recursion 
// Find count of x in an array
// Print the digits of a number using recursion
// Climb Stairs Leetcode (7)

#include<iostream>
#include<vector>
using namespace std;

void print (int arr[], int n , int i)
{
    if (i>= n)
    {
        return ;
    }

    // i++;
    print (arr,n,i+1);
    // IMP : print (arr,n,i++); is invalid as i ++ is post increment and it increments the value after passing it 
    // thus, it ends up in an infinite loop for arr[0]
    std::cout << arr[i] ;
}

void print2 (int arr[], int n ){
 if (n==0)
    {
        return ;
    }
    cout << arr[0];
    print2 (arr+1, n-1);

}

void findIndex (string &s, int &l, char &f, vector<int>&in, int i)
{
    if (i >= l)
    {
        return ;
    }
    
    if (f == s[i])
    {
        in.push_back(i);
    }
    findIndex(s, l, f,in, ++i);
    return ;
}

int main()
{
    // int arr[]={1, 4, 5, 7, 9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // // cout << n;
    // int i = 0;
    // print2(arr, n);

    string s = "yokohama";

    int l = s.length();
    
    char f = 'a';

    vector<int>in;
    int i = 0;

    findIndex(s, l, f, in,i);
    cout<<"Indexes at which '"<<f<<"' is found are :" ;
    for ( i= 0 ; i < in.size() ; i++)
    {
        cout<< in[i]<<" ";
    }

}