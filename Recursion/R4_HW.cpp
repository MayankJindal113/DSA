// Last occurance of a char using recursion
// Reverse a string recursively and give the time complexity

#include<iostream>
using namespace std;

// int find(char*a, char b,int &i){
//     if (i <0 ||  a[i]==b)
//     {
//         return i;
//     }    
//     // if (a[i]==b)
//     // {
//     //     return i;
//     // }  
//     i--;
//     return find (a, b, i);
// }

void reverseS(char*a, int &c, int &d){
    if (c>=d) return;
    swap (a[c],a[d]);
    c=c+1;d=d-1;

    reverseS(a,c,d);
}

int main()
{
    char a []= "g00db0i$$";
    char b = 'b';
    int c= 0, d= sizeof(a)/sizeof(*a)-2;
    cout<<"Calling function : ";
    reverseS(a,c,d);
    d= sizeof(a)/sizeof(*a)-2;
    cout<<"Reversed String : "<<endl;
    for (int i = 0; i <= d; i ++)
    {
        cout<< a[i];
    }
}


    // int i = (sizeof(a)/sizeof(a[0]))-2;
    // cout << (find(a, b,i)>=0 ? "Last occurance at the index : "<<i : "Not found");
    // cout<<i;
    // if (find(a, b,i)>=0)
    // {
    //     cout<<"Last occurance at the index : "<<i ;
    // }
    // else{
    //     cout << "Not found";
    // }