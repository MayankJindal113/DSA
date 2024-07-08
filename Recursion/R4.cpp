// ADOBE PYQ:
// Also same for coin exchange
// Given an array of distinct numbers, and a target element
// Give the minimum number of elements by which you can create the target by summing the elements of array


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int minElem(vector<int>a, int t)
{
    if (t == 0)
    {
        return 0;
    }
    if (t < 0)
    {
        return INT_MAX;
    }
    int mini= INT_MAX;
    for (int i=0 ; i< a.size(); i++)
    {
        int ans = minElem(a, t-a[i])+1;
        if (ans != INT_MAX)
        {
            mini = min (mini , ans);
        }
    }
    return(mini== INT_MAX ? -1 : mini);
}

int minElem2(vector<int>a, int t, int sum)
{
    if (t == sum)
    {
        return 0;
    }
    if (sum > t)
    {
        return -1;
    }
    int mini= INT_MAX; // total number of integers required
    for (int i=0 ; i< a.size(); i++)
    {
        int ans = minElem2(a,t, sum+a[i]);

        if (ans != -1)
        {
            ans++;
            mini = min (mini , ans);
        }
    }
    return(mini== INT_MAX ? -1 : mini);
}


// int miniElem (vector <int>a, int t, vector<int> ans, int sum)
// {
//     int steps=0;
//     if (t < sum)
//     {
//         return INT_MAX;
//     }
//     else if (t== sum)
//     {
//         ans.push_back(steps);
//         return steps;
//     }
//     int i=0;
//     while(i<a.size())
//     {
//     miniElem(a,t , ans, sum+ a [i+1]);
//     }
// }

int main()
{
    vector<int>a{4,5,3,6,9};
    int target = 9;
    int sum= 0 ;

    cout << minElem2(a, target, sum);
    // int a = INT_MAX ;
    // a++;
    // int minE = INT_MAX;
    // cout << a;
    
}