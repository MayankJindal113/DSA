// New keyword allocates memory dynamically
// and its returns the adderess of the newly allocated heap memory
// See when to pass the head ptr by reference ?




#include<iostream>
using namespace std;
class Ll
{
    public:
    int data; //data member
    Ll *next;
    Ll(int data){
        this->data = data;
        this->next =NULL;
    }
};

Ll * addNodes(Ll *head){
    Ll *newptr= head;
    while(1){
        cout<<"Enter the data for next node of :"<<newptr->data<<endl;
        int d;
        cin>>d;
        if(d==-1){
            // newptr->next=NULL;
            break;
        }
        else{
            Ll * node=new Ll(d);
            newptr->next=node;
            newptr=newptr->next;
        }
    }
    return head;
}

void printLl(Ll* head){
    Ll *newp= head;
    // do
  
    while(newp!=NULL){
        cout<<newp->data<<endl;
        newp=newp->next;
    }

    // this code doesnt cover the case of empty list if we were using 'do while'
}

void insertAtTail(Ll *&head, Ll *&tail){
    int data;
    cin>>data;



    // if (head==NULL)
    // {
    //     head= ;
    // }

}


int main()
{
    // Ll* add = (new Ll(56)); 
    // cout << data;   Working fine
    // Ll * head = new Ll(5);
    Ll* head=NULL;
    Ll* tail=NULL;
  

    insertAtTail(head, tail);
    printLl(head);
}

// Check for the following does it gives data = 5 ?
// int data = new LL(5)->data; 