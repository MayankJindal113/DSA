// One of the function call is wrong from count1 and count2 : see and analyze which one is it :
// There is some logical mistake while calling the count1 function identify it!

#include<iostream>
using namespace std;
void count1(int a){
    if (a>10)return ;
    cout << a;
    count1 (a++);
}
int main()
{
    int a = 0;
     count1 (a);
}




// In Count1, a++ is passed to the recursive call, 
// which does pass the updated value, therefore,
//  an infinite loop is there: instead either use
// ++a ; or a+1; for the same purpose