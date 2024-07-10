// Refer to the file BitMask.cpp in BitMasking folder for the concept


#include<iostream>
#include<vector>
using namespace std;

void subString(string a, vector<string>&ans){

    int s = a.size();
    // int comb = 2^s -1 ;
    int comb = (1<<s)-1;
    for (int i = 0 ; i<= comb; i++){
        int mask = i;
        string currSet = "";
        for (int j =1; j<=s; j++){
            if ((mask & (1 << (j-1)))) // We check whether the jth bit of mask is set or not : to include that char in our ans;
            {
                // currSet.push_back(a[j]);
                currSet+= a[j-1];
            // cout<<"Critical Zone \n";

            }
        }
            // cout<<"Pushed"<<currSet<< "to the answer \n";
        ans.push_back(currSet);
    }
}

int main()
{
    string a = "abc";
    vector<string> ans;
    subString(a, ans);
    int s = a.length();
    // cout << s;
    s = 2^(a.length())-1;
    for (int i = 0; i<ans.size(); i++)
    {
    // cout<<"In the loop";
        cout<<ans[i]<<endl;
    }

}