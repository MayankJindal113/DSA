// *
// Problem I : *Find the mising element of, an array with dulpilcates
// Given an array, range - [1, N]
// Atleast one of the element is missing and for that element some other is repeated
// Return the element(s) which are missing

// Problem II: *Find the first repeated element of an array :
// https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void findMissing(int a[], int &n)
{
    // Approach : a[a[i]] ko  negate kr do, kyu ? kyuki, ek a[i] ek bar aana chahiye tha, but agar, hame already a[i] 
    // negated mila toh iska matlab there are two a[i] which made it negative
    int i=0;
    while(i<n)
    {
    if (a[abs(a[i])-1]<0) // a[i]-1 kyuki hamare paas jo numbers hai wo [1,N] ko belong karte hai but indices should be [0,n-1]
    {
        cout<<"Duplicate :"<<abs(a[i])<<endl;
    }
    else {
        a[abs(a[i])-1]*=-1;
    }
    i++;
    }
    i=0;
    while (i<n){
        if((a[i])>0){
            cout<<"Missing element :"<<i+1<<endl;
            // Missing element
        }
    i++;
    }
}

// Logic I : Negative
int firstRepeated(int arr[], int n) {
        // code here
        // Assuming the element range is [0,N]
    vector<int>in;
    int i=n-1;
    while(i>=0)
    {
        if (arr[abs(arr[i])-1]<0) // a[i]-1 kyuki hamare paas jo numbers hai wo [1,N] ko belong karte hai but indices should be [0,n-1]
        {
            in.push_back(abs(arr[i]));
        }
        else {
            arr[abs(arr[i])-1]*=-1;
        }
        i--;
    }
    if (!in.empty())
    {
    int r= in.back();
    return r;    // 1-based indexing
    }
    else return -1;
}

int firstRHash(int arr[], int n) {
        // code here
        
    unordered_map <int,int>hash;
    for (int i =0; i< n ; i++)
    {
        hash[arr[i]]++;
    }
    
    for (int i =0; i< n ; i++)
    {
        if(hash[arr[i]]>1)
        {
            return (i+1);
        }
    }
    return -1;
}

// int ArrayHash(int arr[], int n){
//     int hash[6]=arr;


// }


void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
    // cout<<" k";
        while(j< nums.size())
        {
            while(i<nums.size())
            {
                cout<<" k";
                if (nums[i]==0)
                {
                    break;
                }
                i++;
            }
            while(j<nums.size())
            {
                cout<<" k";
                if (nums[j]!=0){break;} 
                j++; //go to a non zero number
            }
            if(i>=nums.size()||j>=nums.size())
            {
            swap(nums[i], nums[j]);
            i++;
            j++;
            }
        }
    }

int main()
{   
    // int a[] ={1,7,7,5,3,4,3,5,6};
    // int n = sizeof(a)/sizeof(a[0]);
    // vector<int>in;

    // unordered_map<int, int> n;
    // int b=0 ;
    // n[b]++;

    // cout<<firstRepeated(a, n);
    // cout<<"Using hash function"<<firstRHash(a, n);

    vector<int>b{0,1,0,3,12};
    moveZeroes(b);
    // cout<<"The vector :\n";
    // while(!in.empty())
    // {
    //     cout<<in.back()<<endl;
    //     in.pop_back();
    // }
}