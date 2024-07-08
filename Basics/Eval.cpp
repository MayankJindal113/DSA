#include<iostream>
using namespace std;
int main()
{
    int w,m,n;      //Length of table, Length of the blocks 
    int emp=w;      //Empty space available
    cout<<"Enter the values of w, m, n";
    cin>>w>>m>>n;
                    // Assuming m to be larger than n
    if(m>n)
    {
        if(w%m==0)
        {
            int x=w/m;
            emp=0;
            cout<<x<<"M boxes used";
        }
        else if(w%n==0)
        {
            int y=w/n;
            emp=0;
            cout<<y<<"N boxes used";
        }
        else
        {
            int a=0;
            a=w/m;
            int b=(w-a*m)/n;
            emp=emp-a-b;
            cout<<a<<" Blocks of M "<<b<<"Blocks of N used";
            cout<<emp<<" is the minimal empty space";
        }
    }
    else
    {   cout<<"Invalid input";
        return 0;
    }
}