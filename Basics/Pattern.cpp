#include<iostream>
using namespace std;
/*

Numeric Palindrome Equilateral  Pyramid
    1
   121
  12321
 1234321
123454321
Hi how are you ?
*/ 
int main()
{   
    int row=0;
    int n;
    cout<<"Enter the number of layers";
    cin>>n;
    //no of spaces before the numeric=(n-1)-row
    for(row;row<n;row++)
    {   int col=0;
        while(col!=n-1-row)
        {
            cout<<" ";col++;
        }
        int c=1;
        for(int i=0;i<2*row+1;i++)
        {   if(col<n)
            {
            cout<<c;
            c++;
            col++;
            }
            else if (col==n)
            {
                c=c-2;
                cout<<c;
            }
            else{
                cout<<c;
                c--;
            }
        }
        cout<<endl;
    }
}   





/*
    *
   * *
  * * *
 * * * *
* * * * *
SOLUTION I:
 int layer,n;
    cout<<"Enter the number of layers for the pyramid";
    cin>>layer;
    n=layer;
    int step=1;           //The layer on which we currently are present
    int q= step;
        for(n;n>0;n--)
        {
            q= step;
            int ln;
            ln=n;
            for(ln;ln>1;ln--)
            {
                cout<<" ";
            }
            cout<<"*";
            for(q;q>1;q--)
            {
                cout<<" *";
            }
             cout<<endl;

            step++;
        }
SOLUTION II:
int layer=0;
    cout<<"Enter the number of layers:\n";
    cin>>layer;
    int l=layer;
    int level=0;int s=0;
    for(level;level<layer;level++)
    {
        for(s=l-1;s>0;s--)
        {
            cout<<" ";
        }
        l--;
        for(s=level;s>=0;s--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


Numeric Hollow Half Pyramid
1
1 2
1   3
1     4
1 2 3 4 5
SOLUTION:

int row=0, col=0,layers;
    cout<<"Enter the number of layers";
    cin>>layers;
    for(row;row<layers;row++)
    {
        col=0;
        {
            for(col;col<=row;col++)
            {   
                
                if(col==row||col==0||row==layers-1)
                {
                    cout<<col+1;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
*/