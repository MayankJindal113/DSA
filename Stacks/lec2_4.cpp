// Sort A Stack

#include<iostream>
#include<stack>

using namespace std;

void sorted(stack<int>&s,int t)
{
    if(s.empty())
    {
        s.push(t);
        return;
    }
    if(s.top()>=t)
    {
        s.push(t);
        return;
    }
    else
    {
        int top=s.top();
        s.pop();
        sorted(s,t);
        s.push(top);
    }
    
}

void sortS(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int t=s.top();
    s.pop();
    sortS(s);
    sorted(s,t);

}


void print(stack<int>s)
{
    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
}

int main()
{
stack <int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

cout<<"Before operation";
print(st);

if (st.empty())
    {
        cout<<"Empty Stack";
    }
else{
    sortS(st);
}    

cout<<"After operation";
print(st);

}