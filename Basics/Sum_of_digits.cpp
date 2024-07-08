#include<math.h>
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int a=n;
    int i=-1;
     while (a!=0)
            {
                a=a/10;
                i++;        
            }
    int z=i+1;
    int arr[z]={0};     // To store all the individual digits in the array
    int sum=0;
    int flag=n;
    int p=i;
    cout<<z<<endl;
            for(int q=0;q<=i;q++)
            {
                float sq=pow(10,p);     //pow function always takes in float
                int aaa=((int)sq);
                
                arr[q]=flag/aaa;
            
                flag=flag%aaa;
                p--;
                sum= sum+(arr[q]*arr[q]);
                cout<<"\nThe sum of square of the digits of the number is :"<<sum<<endl;
            }
            cout<<"The digits of the number are : ";
            for(int xy=0;xy<=i;xy++)
            {
                cout<<arr[xy]<<" ";
            }
            cout<<"\nThe sum of square of the digits of the number is :"<<sum;
}