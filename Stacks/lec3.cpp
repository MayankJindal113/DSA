// Pair and vector pair in C++
// vector<pair<int,int>>p;
    // pair<int,int>s;
    // s=make_pair(2,4);

    // p.push_back(s);
    // p.pop_back();

// Next Smallest Element in the array
// Return an array containing the next smallest element corresponding to each of the 
// element in the given array 
// [2,1,4,3]->[1,-1,3,-1]


#include<bits/stdc++.h>

using namespace std;


int main()
{

    vector<int>a={3,1,5,3,2};
    // We traverse from right to left side and for each we push the element itself in case its the smallest
    
    stack<int>st;
    st.push(-1);
    int op[a.size()];
    for(int i=a.size()-1;i>=0;i--){
        if(st.top()<a[i]){
            op[i]=st.top();
        }
        else{
            while(st.top()<a[i]){
                st.pop();
            }
            op[i]=st.top();
        }
        st.push(a[i]);
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<op[i]<<endl;
    }
}