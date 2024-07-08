// Design a destructor to delete a given node from the memory


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
    ~list (){
        cout<<"Destructor"<<endl;
    }

};

void deleteHeadNode(list *&head){
    list * temp;
    temp=head;
    head =head->agla;
    delete temp;
}

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


int main(){
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
    deleteHeadNode(head);
    list *temp=head;
    printList(temp);
}