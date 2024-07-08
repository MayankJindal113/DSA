#include<iostream>
using namespace std;

int main()
{   

   

}




/*
Strivers SDE Sheet:https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
DAY I : TOPIC SOLVED (1.2 PATTERNS)



Q11. 
int n=5;

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

 for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {   
                if((i+j)%2==0)
                {
                    cout<<"1 ";
                }
                else if((i+j)%2!=0)
                {
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }

Q9. 

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
     
    int row=0;
    int n=5;

    for(row;row<n;row++)
    {
        int col=0;
        while(col<n-1-row)
        {
          cout<<" ";
          col++;
        }
        int i=row;
        while(i>=0)
        {
            cout<<"* ";
            i--;
        }
        cout<<endl;
    }
      
    for(row=0;row <n; row++)  
    {
        int i=row;
        while(i>0)
        {
            cout<<" ";
            i--;
        }
        int j=n-1-row;
        while(j>=0)
        {   
            cout<<"* ";
            j--;
        }
        cout<<endl;
    }


Q7.

    *
   ***
  *****
 *******
*********
    int row=0,n;
    cin>>n;
    for(row;row<n;row++)
    {
        int col=0,k=0;
        for(col=0;col<n-1-row;col++)
        {
            cout<<" ";
        }
        for(k;k<2*row+1;k++)
        {   
            cout<<"*";
        }
        cout<<endl;
    }



Q5.
*****
****
***
**
*

while(row>0)
{int col=0;
while(col<row)
{   cout<<"*";
    col++;
}
cout<<endl;
row--;
}
-------------OR-----------

 int row=0,col=0,n;
    cin>>n;
    int a=n;
    for(row;row<n;row++)
    {int col=0;
        while(col<a)
        {   
            cout<<"*";
            col++;
        }
        cout<<endl;
        a--;
    }






Q3.
1
12
123
1234
12345
123456

while(row<n)
  { int col=0;
    while(col<=row)
    {
        cout<<col+1;
        col++;
    }cout<<endl;
    row++;
  }





Q1.
int i=0,n,j=0;
cin>>n;
    for(i;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

*/