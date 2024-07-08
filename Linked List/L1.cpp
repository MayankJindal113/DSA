// Topics - Linked List Creation , Insertion and Deletion  at head, tail, position 

// In linked lists - Its easy to do editting compared to arrays like insertion and deletion
// While arrays give a convinient way to access elements which is difficult in linked lists
// In Linked Lists we have to traverse the list to access the elements

// Types : Single, doubly, circular, doubly circular


#include<iostream>
using namespace std;
class list
{   
    public:
    int val;
    list *agla;
    list(int val){
        this ->val=val;
        this ->agla= NULL;
    }

};

void printList(list *head){

    if (head ==NULL)
    {
        // cout<<"Empty List";
        return;
    }
    
    cout<<head->val<<endl;
    head=head->agla;
    printList(head);   
}

void insertAtPosition(list *&head, list*& tail)
{
    int data, pos;
    cout<<"Enter the data of the node :\n";
    cin>>data;
    list *node= new list (data);
    cout<<"Enter the position after which you wanna insert :"<<data<<endl;
    cin >> pos;
    if (head==NULL) // If empty linked list
    {
        head=tail= node;
    }
    
    else{
        list *ptr;
        ptr=head;

        // if (pos > lengthOfList)
        // {
        //     insertAtTail();
        // }

        while (pos!=0 && ptr->agla != NULL) 
        {
            ptr = ptr->agla;
            pos--;
        }
        if (ptr->agla ==NULL)
        {
            tail = node;
        }
        node ->agla= ptr->agla;   // At a position or at the end 
        ptr->agla= node;
    }
    cout<<"List after the insertion of "<<data<<endl;
    list *temp=head;
    printList(temp);
}


int main()
{
    list *head=NULL;
    list *tail=NULL;

    while(1)
    { 
        bool fl=1;
        cout<<"To continue type 1 else 0\n";
        cin>>fl;
        if (fl==0){break;}
    
    else{insertAtPosition(head, tail);}
    }
    cout<<"Data at the head :"<<head->val<<"Data at the tail :"<<tail->val;

    // list *temp=head;
    // printList(temp);
}