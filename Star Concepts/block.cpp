// If anything (atleast true for variables)is declared inside a block, its scope becomes limited to that block
//  int a=0;
    // {int b= 5;}
    // cout<<a;
    // cout<<b;
    
#include<iostream>
using namespace std;
class a{
    public:
    int data;
    a(){
        cout<<"constructor"<<endl;
    }
    ~a(){
        cout<<"destructor"<<endl;
    }
};

int main()
{
   a a1;

   {
    a a2;
//    a* anew= new a();

   }
//    cout<<anew->data;
}