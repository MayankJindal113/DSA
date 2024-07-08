// Ques1 : Merge two sorted arrays
// Merge sort


// int arr[] vs int *arr int &arr[0]
// Passing array to a function 

// Inversion Count : HackerRank Solved  
// The written mergeSort code is including the inversion count logic
// H.W : In-place merge sort , Inversion Count

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int e, int &count)
{
    int mid= (s+e)/2;
    int len1= mid-s+1;
    int len2= e- mid ;
    int *left = new int[len1];
    int *right = new int[len2];
    int i = s,k=0;
    // Copy the halves of array
    while ( k <len1 )
    {
        left[k++]=arr[i++];
    }
    int j= mid+1;k=0;
    while ( k <len2 )
    {
        right[k++]=arr[j++];
    }
    
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;
    // Merge the sorted halves
    while(leftIndex<len1 && rightIndex< len2)
    {
        if (left [leftIndex]> right[rightIndex])
        {
            count+= len1-leftIndex;
            arr[mainIndex++]= right [rightIndex++];
        }
        else
        {
            arr[mainIndex++]= left [leftIndex++];
        }
    }
    while(leftIndex< len1)
    {
        arr[mainIndex++]= left[leftIndex++];
    }
    while(rightIndex< len2)
    {
        arr[mainIndex++]= right[rightIndex++];
    }

    // HERE U CAN DELETE THE dynamic arrays to save space;
    delete [] left;
    delete [] right;

}

int mergeSort(int arr[], int s, int e)
{   
    if (s >= e)
    {
        // int *p = &arr[s];
        return 0;
    }
    int count = 0;
    int mid= (s+e)/2;
    count += mergeSort(arr,s, mid); // This function call is just, dividing the array in to halves
    count += mergeSort(arr,mid+1,e);
    merge(arr,s,e, count);
    return count;
}

int main()
{   
    int a[]= {2,1,9,3};
    // int count = 0;

    int s = 0; int e = (sizeof (a)/ sizeof (a[0])) -1;
    mergeSort(a, s, e);
    for (int i =0 ; i< e+1 ; i++)
    {
        cout<<a[i]<<endl;
    }
    // 
    // cout<<"Number of inversions required : "<<mergeSort(a, s, e);
}
