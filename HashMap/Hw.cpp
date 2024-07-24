// Largest subarray with 0 sum
// *https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
//**- Implement the above using nested for loops -DONE  - SEE Basics :subArray.cpp

// https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1


#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
    int maxLen(int* arr, int n) {
        // Your code here
        
        // map stores key : [visited/not visited][index where key was found]
        unordered_map<int,int> track;
        int length = 0 ;
        int sum=0;

        for (int i = 0; i<n ; i++)
        {
            // int ele = arr[i];
            sum+= arr[i];
            if (sum ==0){
                length = max(length , i +1);
            }
            if ( track.find(sum) != track.end())
            {
                length = max(length , i - track[sum]);
            }
            else{
            track[sum]=i;
            }
        }
        return length;
    }

int main()
{
            unordered_map<int, int> track;
            // track [15]=10;

            // track [15][1]=10;
            // cout<<track[15][0]<<track[15][1];
 
            // cout << ((track.find(10)==track.end())? "Hello": "No");
            int arr[]{10, 5, -9, -3 ,2, -5};
            int n = sizeof(arr)/sizeof(*arr);
            maxLen(arr, n);
}