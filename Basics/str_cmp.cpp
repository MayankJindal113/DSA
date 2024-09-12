// Compare the ith and jth position of the two strings 
// And print whether that part of the strings is same or not ?

//     for(int i=0;i<6;i++ )
// {
//     if(s1[i]==s2[i])
//     {
//         flag++;
//     }
// }
//Find the total number of common characters in s1 and s2
// int compare_str(string a, string b)
// {
//     int flag=0;
//     for(int i=0;i<6;i++ )
//     {
//         for(int j=0;j<6;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 flag++;
//                 break;
//             }
//         }
//     }
//     return flag;
// }
// Find the total number characters occuring more than once in the both strings 

//We are given two strings such that no character common to both should occur more than 3 times 



// Good String :
// The distance between two adjacent characters should not be more than one


#include<iostream>
#include <string>
#include<vector>
using namespace std; 


string encode(vector<string>& strs) {
        // In encoding, pre-concatenate each element with its length
        // Then concatenate all the elements
        string s="";
        for (string i : strs)
        {
            int n = i.length();
            string c= "";
            c+= n;
            c+= i;
            s+= c;
        }
        return s;
}

 
int main()
{
    // string (s1);
    // string (s2);
    // s2="Mayank";
    // s1="Madhav";
    // vector<string> a ={"Hi", "my", "nam eh", "this i"};
    // string ans = encode (a);
    // int len = ans.length();int i =0;
    // while (i < len)
    // {
    //     cout << ans[i];i++;
    // }
    // string a ="This is a queote";
    // cout << a.length()<< a.size();

    int a = 1450;
    char b = a;
    int c = b;
    cout << a<<endl << b<<endl << c<<endl;
}