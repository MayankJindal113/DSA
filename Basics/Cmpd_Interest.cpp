//  Calculate The Compound Interest

#include<iostream>
using namespace std;
class a 
{
    public:
    void calc(int p,int r, int t)
    {   
        int amount=p;
        for(int i=0;i<t;i++)
        {
            amount+= amount *r/100;
        }
        cout<<amount;
    }
};
// int fun (){
//     int i =0;
//         while(1)
//         {
//             return ++i;
//         }
// }
int main()
{   
    a a1;
    a1.calc(100,10,2);
    // cout << fun();
}
