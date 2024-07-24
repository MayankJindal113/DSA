#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void printSub(vector<vector<int>> subArr){

    int n = subArr.size(); // Gives the number of rows


    for ( int i = 0 ;i< n ; i++)
    {
        int m = subArr[i].size(); // Gives the number of columns

        for(int j = 0 ; j < m ; j++)
        {
            cout << subArr[i][j];
        }cout<< endl;
    }
}

vector<vector<int>> computeSubarrays(int *arr, int n){
    
    vector<vector<int>>ansArrays;

    for (int i = 0; i <n ; i++)
    {
        for (int j =i; j<n ; j++)
        {
            vector<int>sub;
            for (int k = i; k<=j; k++){
                sub.push_back(arr[k]);
                // subArrays[j].push_back(arr[k]);
                cout<<arr[k]<<" ";
            }
            ansArrays.push_back(sub);
            cout<< endl;
            // for (int m = i; m <= j; m++){subArrays[j].push_back(sub[m-i]);}   
        }
    }
    return ansArrays;
}

int main()
{
    int a[]{1,2,3};
    int n = 3;
    vector<vector<int>> j= computeSubarrays(a, n);
    printSub(j);
}