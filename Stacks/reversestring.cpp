#include<iostream>
#include<stack>
using namespace std;
void middleElemnet( stack <int>&s, int &size)
{
    if(s.size()==0)
    {
        cout<<"No element in the stack";
        return;
    }
    if(s.size()==size/2+1)
    {
        cout<<"The middle Element in the given stack is :"<<s.top()<<endl;
        return;
    }
    
    
        int temp=s.top();
        s.pop();
        middleElemnet(s, size);
        // Backtrack
        s.push(temp);

}

int main()
{
   
//    Return the middle element in a stack without changing the contents of the stack

    stack <int> s;
    // s.push(2);
    // s.push(4);
    // s.push(6);
    // s.push(8);
    // s.push(10);
    // // s.push(12);
    // s.push(14);

    int totals=s.size();
    // cout<<totals;
    cout<<s.empty();
    middleElemnet(s, totals);
   
}

/*
// Reverse a string using stacks:

    char a[5]={'a','b','c','d','e'};
    stack <char> s;

    for(int i=0;i<5;i++)
    {
        s.push(a[i]);
    }
    for(int i =0 ; i<5;i++)
    {
        a[i]=s.top();
        s.pop();
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }


*/