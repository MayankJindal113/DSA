// size()
// begin()
// push_back()
// pop_back()
// front ()
// back()

#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a{1,8,7,3,6,11};
    a.push_back(4);
    cout<<endl<<a.back()<<endl;
    // back returns the last element of the vector

    a.pop_back(); 
    // pop_back removes the last element of the vector but does'nt return the element
    cout << a.back()<<endl;
    // begin returns a pointer to the first element of the vector and end returns ptr to the theoratical element after the last element
    cout <<* a.begin()<<endl;
    cout<< * a.end()<<endl;
    cout << * (a.end()-1);
    a.size();

    sort(a.begin(),a.end());
    // push_back()
    // Adds an element to the end of the vector.
    
    // pop_back()
    // Removes the last element of the vector.

    // size()
    // Returns the number of elements in the vector.

}   