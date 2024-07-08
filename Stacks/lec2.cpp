// Shift top element to the bottom of the stack
#include<iostream>
#include<stack>
using namespace std;


void print(stack<int>&st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}


void solve(stack<int> &s, int target)
{  
    if(s.empty())
    {
        s.push(target);
        return ;
    }

    int temp=s.top();
    s.pop();
    solve(s, target);

    s.push(temp);

}


void shifttobottom(stack<int> &st)
{
    if(st.empty())
    {
        cout<<"Stack is empty";
        return ;
    }
    
    int target=st.top();
    st.pop();
    solve(st, target);

    print(st);
}


int main()
{
    stack<int>st;
    for(int i=10; i<80;i=i+10)
    {
        st.push(i);
    }
    shifttobottom(st);   
}