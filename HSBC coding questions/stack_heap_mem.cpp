// There are two types of memories in computer : Stack(Static) and Heap(Dynamic)
// Stack is used for the static applications, where once, once the scope is ended, the memory is cleaned automatically
// Heap is used for dynamic memory allocation, where, we explicitly need to clear out the memory, when the usage is complete


#include <iostream>
using namespace std;

class node {
public:
    int a;
    node(int d) {
        this->a = d;
    }
};

void createfcn(node*& o1, node*& o2) {
    node obj1(5);
    node* obj2 = new node(12);

    o1 = &obj1;
    o2 = obj2;
}

void dummyFunction() {
    int temp[100]; // Some dummy data to fill the stack
    for (int i = 0; i < 100; ++i) {
        temp[i] = i;
    }
}

int main() {
    node* ob1;
    node* ob2;
    createfcn(ob1, ob2);
    
    // Call another function to alter the stack memory
    dummyFunction();

    // Now, ob1 may give a garbage value since obj1 is out of scope
    cout << "ob1->a: " << ob1->a << endl;
    cout << "ob2->a: " << ob2->a << endl;

    // Clean up dynamic memory
    delete ob2;
    return 0;
}
