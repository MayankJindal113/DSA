// Return true/flase if array sorted or not
// Binary Search using Recursion
// IMPORTANT : Print the subsequence of a given string : Main concept to include/exclude an element in alternate pass
//  THERE IS A DIFFERENCE BETWEEN Subsequence and Substring and permutations of string CHECK FILE - SUBSTRING.CPP IN STAR COMCEPTS
// HW : Find the subsequence using bit masking - DONE 

#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int n)
{
    if (!n)
    {
        return ;
    }
    cout<<arr[0]<<endl;
    print (arr+1, n-1);
}

// bool check (int arr[],int i, int n)
// {
//     if (!n)
//     {
//         return true;
//     }
//     if (arr[0]> arr[i])
//     {
//         return false;
//     }cout<<arr[0];
//     return check (arr,i+1, n-1);
// }

// bool sorted(int arr[], int i,int n){
//     // int q= i;
//     if (!n)
//     {
//         return true;
//     } 
//     if(check(arr,i,n))
//     {
//     return sorted (arr+1,i+1, n-1);
//     }    
//     else {
//         return false;
//     }
// }

bool check (int arr[],int n)
{
    if (!(n-1))
    {
        return true;
    }
    if (arr[0]> arr[1])
    {
        return false;
    }
    // return check (arr+1, n-1);
    // or
    bool r= check(arr+1, n-1);
    return r;
}

int binarySearch(vector <int>&a,int key, int s, int e)
{
    // base case :
    if (s>e)
    {
        return -1 ;
    }
    // ek case ham sambhal lege :
    int mid = (s+e)/2;
    if (a[mid]==key)
    {
        return mid;
    }

    return (a[mid]>key) ? binarySearch(a, key, s, mid-1) :  binarySearch(a, key, mid+1, e);
    // else if (a[mid]>key)
    // {
    //     e= mid-1;
    // }
    // else if (a[mid]<key)
    // {
    //     s= mid+1;
    // }
    // // baki recursion :
    // return binarySearch(a, key, s, e);
}

void subString(string &a, string op, int i, vector<string> &b)
{
    // i is the index of that element which we toggle between considering/not considering in various cases
    if ( i >= a.length() )
    {
        cout << op<<endl;
        b.push_back(op);
        return;
    }

    // Exclude the ith character
    subString(a, op, i+1,b);

    // Include the ith character
    op.push_back(a[i]);
    // or 
    // op = op + a[i]; Concatenation
    subString(a, op, i+1,b);
}


int main()
{
    // int ar []={1,4,0,9};
    // int i=0,n=sizeof(ar)/sizeof(ar[0]);
    // print(ar,n);
    // cout<<check (ar, n);

    // vector <int> n ={1,3,5,7,9,11};
    // int key= 7;
    // int s= 0;
    // int e= n.size()-1;
    // cout <<binarySearch(n,key, s, e);


    // subString
    string op="",a= "abcde";
    vector<string> b;
    subString (a, op, 0,b);
    // cout<< b;

    // int i=0;
    // while(!b.empty())
    // {
    // cout<< b.back()<<endl;
    // b.pop_back();
    // }
}







// vector<int> slv(vector<int>A, int i, int p, vector <int> &val)
// {
//     int prod=1;
//     if (i> A.size())
//     {
//         val.push_back(A[i]);
//         return slv;
//     }
//     slv(A, i+1, p , val);
//     prod*=A[i];
//     slv(A, i, p , val);
// }
// int solve(int n, int p, vector<int> A) {
//     // Write your code here
//     vector<int>a;
//     int i = 0;
//     vector<int> val = slv(A,i,p,a);
//     int sum=0;
//     for (int i= 0;i<val.size();i++)
//     {
//         sum+= val[i];
//     }
//     return (sum %10^9 + 7)
// }