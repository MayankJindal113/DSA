// Shift top element of a stack to bottom :
// Reverse a stack

#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>&s,int t)
{
    if(s.empty())
    {
        s.push(t);
        return;
    }

    int top=s.top();
    s.pop();
    solve(s, t);
    s.push(top);
}


void insertAtBottom(stack <int>&s){
    int target= s.top();
    s.pop();

    solve(s, target);
}


void print(stack<int>s)
{
    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
}

void reverseS(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int top=s.top();
    s.pop();
    reverseS(s);
    solve(s,top);
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
reverseS(st);
}    

cout<<"After operation";
print(st);

}