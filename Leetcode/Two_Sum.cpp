// Return the indices of two numbers from an array whose sum adds upto a target integer 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int nums [n];
    int i=0;
    cout<<"Enter the elements of the array: "<<endl;
    while ( i < n)
    {
        cin>>nums[i];
        i++;
    }
    int target;
    cout<<"Enter the target integer";
    cin>>target;

    // Solution II :
    int tag;
    for(int i=0;i<n;i++)
    {   tag=nums[i]-target;

        if(tag==0)
        { cout<<i;
            break;
        }
    } 

    /* Solution I :
    for(int q=0;q<n;q++)
    {
        int a = nums [q];
        int sum = 0;
        for(int z = q+1;z<n;z++)
        {
            sum = a + nums[z];
            if(target==sum)
            {
                cout<<"The indices of the number are : "<<q<<" and "<<z;
            }
        }   
    }*/
}