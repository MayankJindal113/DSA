// Check if redundant parentheses in the given string

#include<iostream>
#include<stack>

using namespace std;

int check(string &s) 
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        // bool flag=false;
        if(s[i]=='('||'+'||'-'||'*'||'/')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()='+'||'-'||'*'||'/')
            {
                // flag=true;
                while(1)
                {
                    if(st.top()=='(')
                    {
                        break;
                    }
                    st.pop();
                }
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    string s= "(a+b*(d/q))";
    string s2= "((a+b))";

        cout<<check(s2)<<endl;
        cout<<check(s);
}