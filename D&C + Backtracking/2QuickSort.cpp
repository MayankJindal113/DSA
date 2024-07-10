// Quick Sort

#include<iostream>
using namespace std;

void quickSort(int* a, int s, int e){
    // Base Case 
    if (s>=e) return;

    int p = a[s],rightIndex =s;
    for (int i =s+1; i<=e; i++)
    {
        if(a[i]<=p){rightIndex++;}
    }
    std::swap (a[s], a[rightIndex]);

    int i =s, j = e;
    while(i <rightIndex || j> rightIndex){
        while(a[i]<=p && i <rightIndex){
            i++;
        }while(a[j]>p && j> rightIndex){
            j--;
        }
        if(i<rightIndex && j>rightIndex){
            std::swap(a[i],a[j]);
        }
    }

    quickSort(a,s,rightIndex-1);
    quickSort(a,rightIndex+1,e);
}

int main()
{
    int arr []{2,2,1,3,4,5,6};

    int s = 0, e= sizeof(arr)/sizeof(*arr)-1;
    quickSort(arr, s, e);
    for (int i = 0 ; i <= e; i ++){
        cout<<arr[i]<<endl;
    }
}