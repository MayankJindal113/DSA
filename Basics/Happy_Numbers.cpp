// Take a number as an input 
// Replace it by the sum of squares of its digits, endlessly until it equals 1,, then 'n' is a happy number 
// If it gets stuck in a loop then return 
#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int sum=0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int flag=n;
    while(sum!=1)
    {   int a= flag;
        int i=-1;
            while (a!=0)
            {
                a=a/10;
                i++;
            }
            float arr[i];
            int p=i;
            for(int q=0;q<=p;q++)
            {
                arr[q]=flag/pow(10,p);
                flag=flag%10;
                p--;
                sum=sum+arr[q]*arr[q];
            }
            cout<<"The digits of the number are : ";
            for(int z=0;z<=i;z++)
            {
                cout<<arr[z]<<" ";
            }
    }
}