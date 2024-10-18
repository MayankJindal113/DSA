// There are two types of memories in computer : Stack and Heap 
// Stack is used for the static applications, where once, once the scope is ended, the memory is cleaned automatically
// Heap is used for dynamic memory allocation, where, we explicitly need to clear out the memory, when the usage is complete


#include<iostream>
using namespace std;
class node
{   
    public:
    int a;
    node(int d)
    {
        this->a = d;
    }

};

void dummy()
{
 int arr[100];
    for ( int i=0 ; i< 100; i++)
    {
        arr[i]= 5*i;
    }
}

node createfcn(node*&o1, node*&o2)
{
    node obj1(5);
    node *obj2 = new node (12);

    o1=&obj1;
    o2=obj2;
    dummy();

    return obj1;
}


int main()
{
    node *ob1;
    node *ob2 ;
    node c = createfcn(ob1, ob2);
    cout << ob1->a<<endl;
    cout << ob2->a;
    cout << endl;
    cout << c.a;
}