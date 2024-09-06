// https://www.geeksforgeeks.org/static-keyword-cpp/

#include<iostream>

using namespace std;
class GFG{
    public :
    int i = 0;
    GFG (int i ){
        cout<< "Constructor called for : "<<i<<" th object";
    }~GFG (){
        cout<< "Destructor called";
    }
};

void demo (){

    static bool flag = true;   // this will
    flag = !flag;
    cout << flag<<endl;
}
int main()
{
    cout<<"Observe, each time the flag is inverted, ie using static, its created only on single time"<<endl;

    {
        GFG ob1(1);
        static int var = 22;
        static GFG ob2(2); 
        // This happened because the scope of static objects is throughout the lifetime of the program.
    }cout <<"Out of the block";
    cout << var;
    demo();
    demo();
    demo();
    demo();
    demo();
    demo();
}