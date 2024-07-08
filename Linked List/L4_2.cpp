// SOLUTION : ADDING TWO LINKED LISTS 
// Two lists representing two numbers are given, return the result of their sum


#include<iostream>
using namespace std;
class nodeL
{   
    public:
    nodeL *next;
    int data;
    nodeL(int data){
        this ->data= data;
        this ->next = NULL;
    }
};
void printL(nodeL *head){

    if (head ==NULL)
    {
        // cout<<"Empty List";
        return;
    }
    // cout<<"In print";
    
    cout<<head->data<<" ";
    head=head->next;
    printL(head);   
}

nodeL * reverse(nodeL*&curr,nodeL*&prev)
{
    if(curr==NULL){
        return prev;
    }
    nodeL *fwd;
    fwd= curr ->next;
    curr->next = prev;
    reverse(fwd , curr);
}

nodeL*addLists(nodeL*head1,nodeL*head2){

    // To add the individual values of the two lists, we follow the following steps:
    // 1. reverse both the lists;
    // 2. add the corr nodes
    // 3. reverse the obtained single sum list 

    if (!head1)
    {
        return head2;
    }
    else if (!head2)
    {
        return head1;
    }

    // Reverse both lists:
    nodeL*prev=NULL;
    head1=reverse (head1, prev);
    head2=reverse (head2, prev);
    // cout<<endl;
    // printL(head1);
    // printL(head2);

    // start to add the lists
    int carry=0;
    nodeL*ansNode=NULL;
    nodeL*ansNodeTail=NULL;
    
    while(head1 && head2)
    {
        int sum = carry + head1->data + head2->data;
        // cout<<sum<<endl;
        int d=sum % 10;
        carry = sum /10;
        nodeL*digit= new nodeL(d); // variable 

        head1=head1->next;
        head2=head2->next;
        if(ansNode==NULL)
        {
            ansNode=digit;
            ansNodeTail=digit;
        }
        else{
        ansNodeTail->next= digit;
        ansNodeTail=ansNodeTail->next;
        }
    }

    while(head1)
    {
    int sum = carry + head1->data;
    int d=sum % 10;
    carry = sum /10;
    nodeL*digit= new nodeL(d); // variable 
    head1=head1->next;
    ansNodeTail->next= digit;
    ansNodeTail=ansNodeTail->next;
    }
    while(head2)
    {
    int sum = carry + head2->data;
    int d=sum % 10;
    carry = sum /10;
    nodeL*digit= new nodeL(d); // variable 
    head2=head2->next;
    ansNodeTail->next= digit;
    ansNodeTail=ansNodeTail->next;
    }
    
    if (head1==NULL&&!head2)
    {
        if (carry)
        {
            // cout<<"Iam here bro!";
            nodeL*digit= new nodeL(carry);
            ansNodeTail->next= digit;
            ansNodeTail=ansNodeTail->next;
        }
    }
    prev=NULL;
    ansNode=reverse(ansNode, prev);

    return ansNode;
}

// nodeL* reverseLocally(nodeL*head){
//     nodeL*prev=NULL;
//     prev = reverse(head,prev);
//     printL(prev);
// }

int main()
{
    nodeL* head1= new nodeL (4);
    nodeL* sec1= new nodeL (2);
    // nodeL* third1= new nodeL (3);

    head1->next=sec1;
    // sec1->next=third1;

    nodeL* head2= new nodeL (6);
    nodeL* sec2= new nodeL (3);
    nodeL* third2= new nodeL (8);
    // nodeL* four2= new nodeL (1);
    // nodeL* five2= new nodeL (7);

    head2->next=sec2;
    sec2->next=third2;

    // third2->next=four2;
    // four2->next=five2;

    printL(head1);
    cout<<endl;
    printL(head2);
    cout<<endl;

    nodeL*ans =addLists(head1, head2);

    cout<<"The sum of the list is as follows :\n";
    printL(ans);

    // reverseLocally(head2);
    // cout<<"out";

}