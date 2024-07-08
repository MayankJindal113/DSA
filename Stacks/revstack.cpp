#include<iostream>
#include<stack>

using namespace std;

void reversestack(stack<int>& s)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reversestack(s);
    s.push(temp);
}

void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}


int main()
{
    stack <int> st;
    int i=0;
    while(i<80)
    {
        st.push(i);
        i=i+10;
    }

    //Reverse
    print(st);
    reversestack(st);
    print(st);

}