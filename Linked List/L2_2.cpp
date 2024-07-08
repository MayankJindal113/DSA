// Reverse a Linked List
// Logic that I thought of :


// void solve(ListNode*&head,int len){
//         int l=len;
//         if(len>1)
//         {
//             ListNode *temp1,*temp2;
//             temp1=temp2=head;
//             while(len>1){
//                 temp2=temp2->next;
//                 len--;
//             }
//             int var=temp1->val;
//             temp1->val=temp2->val;
//             temp2->val=var;
//             l=l-2;
//             solve(temp1,l);
//         }
//     }
//     ListNode* reverseList(ListNode* head) {     
//         ListNode* listL = head;
//         // temp1=temp2=head;
//         int len=0;
//         while(listL){
//             len++;
//             listL=listL->next;
//         }
//         solve(head,len);
//         return head;
// }
// };

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
// cout<<"in fcn";
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

list * reverse(list*&curr,list*&prev)
{
    if(curr==NULL){
        return prev;
    }
    list *fwd;
    fwd= curr ->agla;
    curr->agla = prev;
    reverse(fwd , curr);
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

    list *curr, *prev;
    curr =head;
    prev= NULL;
    head =reverse(curr, prev);
    cout<<"After reversing :\n";
    list *temp=head;
    printList(temp);
}