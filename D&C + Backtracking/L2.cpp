// Quick Sort
// piovt element select
// move to its correct index
// Move smaller elements than the pivot to the left, and bigger to the right
// Recursively sort the left and the right part

#include<iostream>
using namespace std;

void quickSort(int*a, int start, int end)
{
    if (start >= end)return;

    int pivot = a[start];
    int count = 0 ;

    for (int i=start+1; i<=end; i++)
    {
        if (a[i]<pivot)
        {count++;}
    }

    int pivotIndex = count + start ;
    // if(a[pivotIndex]==a[start]){pivotIndex++;}
    std::swap(a[pivotIndex],a[start]);  // Sort the specific element

    int i =start;int j=end;

    while(i<pivotIndex && j >pivotIndex)
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
            std::swap(a[i],a[j]);    //right mein bigger, left mein smallers
            i++;j--;
        }
    }

    quickSort(a, start, pivotIndex-1);
    quickSort(a, pivotIndex+1, end);

}

int main()
{
    int a [] {45,3,5,3,6,1,2};
    int end = sizeof(a)/sizeof(*a)-1;

    quickSort(a, 0, end);
    for (int i =0; i <= end; i++)
    {
        cout<<a[i]<<endl;
    }
}