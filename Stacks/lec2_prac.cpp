// Shfit the top most element to the bottom 
#include<iostream>
#include<stack>
using namespace std;

stack<int> create(){
    stack <int> st;
    for(int i=100;i>20;i/=2){
        st.push(i);
    }
    return st;

}
void solve(stack <int> &s,int target)
{
    if(s.empty())
    {
    s.push(target);
        return;
    }
    int temp =s.top();
    s.pop();
    solve(s,target);

    s.push(temp);
}
void bottom(stack<int>& s){
    if(s.empty())
    {
        cout<<"Empty Stack";
        return;
    }
    int target=s.top();
    s.pop();
  
    solve(s,target);
}



void print(stack<int>s)
{
while(s.empty()!=1)
    {   
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main()
{

    stack <int> st= create();

    print(st);
    cout<<endl;

    bottom(st);
    
    print(st);
    
}
