// https://www.hackerrank.com/challenges/ctci-merge-sort/problem

// Solved this question 

// The mergeSort code in the L1.cpp also includes the logic for inversion count 
// Leetcode 912 : In-place Merge sort

#include<iostream>
#include<vector>
using namespace std;

// Wrong Logic :
// void merge(int arr[], int s, int e)
// {
//     int mid= (s+e)/2;
//     // int mainIndex = s;
//     // Merge the sorted halves
//     int i=s,j=mid+1;
//     while(i<=mid && j <= e)
//     {
//         if (arr[i]>arr[j])
//         {
//             int a = arr[i];
//             arr[i]=arr[j];
//             arr[j]= a;
//             i++;
//         }
//         else if (arr[i]<arr[j]) {
//              i++;
//         }
//     }
// }
// void mergeSort(int arr[], int s, int e)
// {   
//     if (s >= e)
//     {
//         return ;
//     }
//     // int count = 0;
//     int mid= (s+e)/2;
//     mergeSort(arr,s, mid); // This function call is just, dividing the array in to halves
//     mergeSort(arr,mid+1,e);
//     merge(arr,s,e);
//     return ;
// }


void mergeInplace(vector<int>&v, int start,int mid, int end){
        int total_len = end- start + 1;
        int gap = (total_len /2) + (total_len %2);
        while(gap >0)
        {
        int i = start ; int j = gap +start;
        while(j<=end){
            if (v [i]> v [j])
            {
                swap (v [i++], v [j++]);
                continue;
            }
            ++i; ++j;
        } 
        gap= gap <=1 ? 0 : (gap/2) + (gap %2);
        }
    }

    void mergeSort(vector<int>&nums, int start , int end){
        if (start>=end) return;
        int mid= (start+end)/2; // Right shift <=> divide by two
        mergeSort (nums, start, mid);
        mergeSort (nums, mid+1, end);
        mergeInplace(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }


int main ()
{
    // int arr[]{1,3,7,2,5,9,5,1};
    vector<int> arr{9,11, 2, 4};
    int s = 0 ; 
    int e = arr.size()-1;
    // mergeSort(arr, s, e);
    // cout<<e;
    sortArray(arr);
    for(int i = 0 ; i <= e ; i ++)
    {
        cout << arr[i]<<endl;
    }
}