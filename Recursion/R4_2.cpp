// Ques 2 : Cut a log (length N) into maximum number of segments, of length x, y or z
// (CUT ROPE)
// This code won't get accept on Leetcode as its not optimal
// Ques 3 : Give the max sum of non-adjacent elements of an array

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int macksSegments (vector<int>&a, int &N)
{
    // Assuming all the elements of 'a' are less than N
    if (N==0){
        return 0;
    }
    // else if (N< 0){
    //     return -1;
    // }
    
    int maxi= -1 ;
    for (int i =0; i <a.size(); i++)
    {
        int n = N- a[i];
        int ans;
        if (N <0)
        {
        ans =-1; 
        continue;
        }
        ans = macksSegments(a, n);   
        if (ans != -1)
        {
        ans ++;
        }  
        maxi = max (maxi, ans);
    }
    return (maxi);
}

// void mcksSum (vector<int>a, int i, int sum, int &maxi){
//     if (i >= a. size())
//     {
//         maxi = max (maxi, sum);
//         return ;
//     }
//     mcksSum(a, i+1,sum, maxi);
//     int s= sum+ a[i];
//     mcksSum(a, i+2,s, maxi);
// }


int mcksSum (vector<int>a, int i, int sum){
    if (i >= a. size())
    {
        return sum ;
    }
    int ans1 = mcksSum(a, i+1,sum) ;

    int s = sum+ a[i];
    int ans2 =  mcksSum(a, i+2,s);
    
    return max (ans1, ans2);
}

int main()
{
    vector <int>a {1,4,8,6,1};  // Allowed segments to be cut into
    int len= 5;
    int l = len;
    int i=0,sum=0,maxi =INT_MIN ;
    maxi = mcksSum(a, i, sum);
    // cout << "The max number of segments that rod of length : "<< l <<"  be cut into is : "<<macksSegments(a, len);
    cout << "Max sum in non adjacent elements : "<< maxi;
}