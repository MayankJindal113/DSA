// 1. Quick Sort
// piovt element select
// move to its correct index
// Move smaller elements than the pivot to the left, and bigger to the right
// Recursively sort the left and the right part
// *Calculate the Complexity of quick sort ;
// *THINK OF THE CASE OF EQUAL ELEMENTS ;
// 

// Started with backtracking :
// 2. Find all the permutations possible for a given string 

#include<iostream>
using namespace std;

void permutations (string &s, int i){
    if (i >= s.length()){
        cout<<s<<endl;
        return;
    }

    for (int j= i; j<s.length();j++){
        swap(s[j],s[i]);
        permutations(s, i+1);

        swap(s[i],s[j]);
    }
}

void quickSort(int*a, int start, int end)
{
    // Base Case
    if (start >= end)return;

    // Partition logic : Ek pivot element lo and take it to its correct position 
    int pivot = a[start];
    int count = 0 ;

    for (int i=start+1; i<=end; i++) // O(n)
    {
        if (a[i]<=pivot)
        {count++;}
    }

    int pivotIndex = count + start ;
    // if(a[pivotIndex]==a[start]){pivotIndex++;}
    std::swap(a[pivotIndex],a[start]);  // Pivot to its correct position (Sorted the pivot)
    
    // check right side mein only larger elements and left mein smaller

    int i =start;int j=end;

    while(i<pivotIndex && j >pivotIndex) // Assuming O(n) for this too (Upperbound)
    {
        if(a[i]<pivot)
        {
            i++;
        }
        else if (a[j]>=pivot)
        {
            j--;
        }
        if (a[i]>pivot && a[j]<pivot)
        {
            std::swap(a[i],a[j]);    //right mein bigger, left mein smaller
            i++;j--;
        }
    }

    // Recursive call to sort the left and right subarray
    quickSort(a, start, pivotIndex-1);
    quickSort(a, pivotIndex+1, end);

}

int main()
{
    int a [] {6,1,5,5,7,1,2,9};
    int end = sizeof(a)/sizeof(*a)-1;
    string s = "xyz";

    permutations(s,0);

    // quickSort(a, 0, end);
    // for (int i =0; i <= end; i++)
    // {
    //     cout<<a[i]<<endl;
    // }
}