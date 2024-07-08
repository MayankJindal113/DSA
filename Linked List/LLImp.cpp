//  New keyword allocates the memory at the heap : Dynamically

// While if we dont use new the linkedlist/memory will be created at the stack which generally have less space;
// For every new we need to use delete which in turn calls the destructor for that memory
// In case of normal (automatic) allocation, the destructor is called automatically once the obj is out of scope


// Important : See the file : scope.cpp and block.cpp in star concepts folder;

// Important : Note that mostly the standard concepts (questions) are repeated from Linked List so practice them well !

// Try the use of & and without & head passing to a function and check its result manually

// ******************** IMPORTANT :
// Passing by value a nodeptr, we can change the contents of the address that was passed, ie. contents of the whole list can be
// altered. Although,this does'nt allows us to alter the ptr itself, ie we cannot alter where its pointed to;
// Thus, we use the concept of passing by reference, where the original ptr is being passed to the fcn and whole access is there to alter it.



#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data=data;
        this ->next =NULL;
    }
};
void modifyLl(Node*head){
    head->data = 10;
    Node*n= new Node(12);
    head ->next= n;   // This will also reflect as this is just modifying the memry not the ptr
    return ;
}
void modifyHead(Node*head){
    head = new Node (90);
    return ;
}
int main() {
    
    Node * head = new Node (89);
    cout<<head->data<<endl;
    modifyLl(head);             // We are able to alter the contents of the node as we passed the address
    cout<<head->data<<endl;
    modifyHead(head);           // BUT THE HEAD NODE PTR CAN'T BE MODIFIED TO A NEW ADDRESS
    cout<<head->data;           
    cout<<head->next->data;
    return 0;
}