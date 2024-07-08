// Doubly Linked List
// Insert and Delete at head, position, tail

// In case of deletion the following is allowed :
// Node * a1, *a2;
// a1= new Node();
// a2= new Node();
// a1->next = a2;
// a2->next = NULL;
// delete a1;

// Better practice to first dereference the a1->next as from a2 and then delte it

// Code for insertion at the end of doubly linked list
// For practice try deletion at a position

// Circular : No head/tail always insert and delete at a position
// Insert on the basis of value

#include<iostream>
using namespace std;
class Ll
{   
    public:
    int val;
    Ll * agla;
    Ll * pichla;

    Ll(int val){
        this -> val = val;
        this -> agla=NULL;
        this -> pichla=NULL;
    }
    ~Ll(){
        cout<<"Deconstructor called";
    }
};

void printLl(Ll *hcpy){
    while(hcpy){
        cout<<hcpy->val<<endl;
        hcpy=hcpy->agla;
    }
    cout<<"Null\n";
}

void insertAtTail(Ll*&head){

    while(1)
    {
        bool fl=1;
        cout<<"Continue ?";
        cin>>fl;
        if (fl==1)
        {
            Ll *temp= head;
            int d;
            cout<<"Data to be inserted: ";
            cin>>d;
            Ll *newNode= new Ll(d);
            if (head==NULL){
                head = newNode;
                cout<<"here";
            }
            else{
                while(temp->agla){
                    temp= temp->agla;
                }
                temp->agla=newNode;
                newNode->pichla= temp;
            }
            cout<<"The list after inserting : "<<d<<" is as follows : \n";
            Ll*headcpy=head;
            printLl(headcpy);
        }
        else {
            Ll*headcpy=head;
            printLl(headcpy);
            cout<<"The final list is :";
            printLl(headcpy);
            break;
        }
        
    }
}

int main()
{
    Ll * head=NULL;
    insertAtTail(head);
}