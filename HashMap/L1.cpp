// Ques : https://www.naukri.com/code360/problems/maximum-frequency-number_920319?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// Basics of Hash Function :
// Creation, Searching, Insertion, Deletion, Complexities
// Given a string, give how many number of times, each character has appeared 

#include<iostream>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    string s = "abcde";
    int k = s.size();
    pair<string,int> b = make_pair(s, s.size());
    m.insert(b);
    cout << m["abcde"]<<endl;

    m["bkk"]= 2;
    cout <<  m["bkk"]<<endl;

    for ( auto p : m){
        if ( p.second ==2){
            cout << p.first<<endl;
            break;
        }
    }
    cout << m.count("bkk")<<endl;

    if ( m.find ("mayank")!= m.end()){
        cout<<"Found"<<endl;
    }else{
        cout << "Not Found"<<endl;
    }
    
    cout << m.size()<<endl;
    // HERE IT IS IMPORTANT TO NOTE THAT, USING THE FOLLOWING SYNTAX WILL CREATE AN ENTRY IN THE TABLE, INITIALIZED WITH 0
    cout << m["Scorpio"]<<endl;

    cout << m.size()<<endl;

    for ( auto i : m){
        cout << i.first<< "->"<<i.second<<endl;
    }

    // Iterator: on the created map :
    unordered_map<string,int>::iterator it = m.begin ();
    while(it != m.end()){
        cout << it->first<< "->"<<it->second<<endl;
        it++;
    }

}