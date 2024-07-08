#include<iostream>
using namespace std;
class ll{
    public:
    int data=10;
    ~ll(){
        cout<<"destructor called";
    }
};

int main()
{
    ll *a;

    {
       ll b;   // Static memory allocated
       a= new ll(); // Dynamic memory allocated
    }
    cout<<a->data<<endl;
    // but b->data here is not valid as its scope was limited and its desctructor was already called
    cout<<"Delete keyword called\n";
    delete a;  // The destructor of a will be called now ;
}