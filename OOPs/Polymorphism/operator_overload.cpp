// if there are overloaded functions with

#include<iostream>
using namespace std;
class A
{
public :
    //Function overloading :
    int data;
    A(int d)
    {
        this->data = d;
    }
    int fcn(int a,char b='9')
    {
        cout << a<< b;
        return 0;
    }
    int fcn(int a)
    {
        cout << a;
        return 0;
    }

    // Operator Overloading :
    void operator() (A &oj){
            int v = this->data;
            int u = oj.data;
            cout << "The product of data is : "<< u*v;
    }
};
int main()
{
    // A obj(2);
    // obj.fcn(2,'2'-'0');
    A e1(2), e2(6);
    e1(e2);
}