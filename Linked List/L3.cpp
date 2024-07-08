// Find the middle node of a linked list
// VIMP **** Reverse the list in k groups
// *** LOOP Identify and remove


#include<iostream>
using namespace std;
class Ll
{   
    public:
    int val;
    Ll* next;
    Ll(int val){
        this ->val=val;
        this->next= NULL;
    }
};

int printLl(Ll*head)
{
    Ll*temp=head;
    int len=0;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
        len++;
    }
    return len;
}
int getLen(Ll*head)
{
    Ll*temp=head;
    int len=0;
    while(temp)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
Ll* middleLl(Ll* head){



    Ll* slow, *fast;
    slow=fast=head;
    fast=head->next;
    // if (head==NULL || head->next ==NULL)
    // {
    //     return head;
    // }
    
    while(fast!=NULL)
    {
        fast=fast->next;
        if (fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
Ll * reverseL(Ll*& head){
    int len=getLen(head);
    cout<<"\nlength"<<len;
    Ll* curr = head;
    Ll* prev = NULL;
    Ll* fwd  = curr->next;
    while(len)
    {   
        fwd= curr->next;
        curr->next=prev;
        prev = curr;
        curr = fwd;
        // fwd= fwd->next;  This will make the fwd go to Null -> next which does'nt exist
        len--;
    }
    return prev;
}

Ll * reverseKnodes(Ll*& head, int k){
    int len=getLen(head);
    if (!head || k>len ){
        return head;
    }
    int c=k;
    Ll* curr = head;
    Ll* prev = NULL;
    Ll* fwd  = NULL;
    while(c)
    {   
        fwd=curr->next;
        curr->next=prev;
        prev = curr;
        curr = fwd;
        c--;
    }

    head ->next = reverseKnodes(fwd, k);  

    return prev;        // prev is the new head of the reversed linked list *
}   

int main()
{
    Ll *n1,*n2,*n3,*n4,*n5;
    n1= new Ll(1);
    n2= new Ll(2);
    n3= new Ll(3);
    n4= new Ll(4);
    n5= new Ll(5);
    
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;   
    Ll*head=n1;

    int len =printLl (n1);
    int k;
    head =reverseKnodes(head, k=2);
    // head = reverseK(head);
    // cout<<head->val;
    // Ll* middle = middleLl(n1);
    // cout<<"Middle element of the list is : "<<middle->val;
    printLl(head);
}