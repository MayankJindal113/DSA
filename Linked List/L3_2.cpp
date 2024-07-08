// IMP **** Loop in a Linked List
// Check, Detect, Remove the loop
// There are around 8 different methods to solve the above question


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


bool detectLoop(Ll*head){
    Ll* fast, *slow;
    fast=slow=head;

    if(!head)  //Null
    {
        return false;
    }
    // In case of 1 node Loop present or not ?
    while(fast)
    {
        fast=fast->next;
        if(fast)
        // Yahan slow ko null set karna hai why/why not?
        {
            fast=fast->next;
            slow=slow->next;
            if (slow==fast)
            {
                // cout<<"Loop existst and The starting point of the loop is : "<<startPos(slow, fast);
                slow = head ;
                int pos =0;
                while (slow!= fast){
                    slow=slow->next;
                    fast=fast->next;
                    pos++;
                }
                cout<<"The starting pos of the loop is : "<<pos<<" with the data : "<<slow->val;
                return true;
            }
        }
    }
    return false;
}


int main()
{
    Ll *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8;
    n1= new Ll(1);
    n2= new Ll(2);
    n3= new Ll(3);
    n4= new Ll(4);
    n5= new Ll(5);
    n6= new Ll(6);
    n7= new Ll(7);
    n8= new Ll(8);
    
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;   
    n7->next=n8;   
    n8->next=n5;   

    Ll*head=n1;

    // printLl(n1);
    cout<<"Whether the given list contains a loop ?:\n"<<detectLoop(head);
    // cout<<"\nThe starting position of the loop is :\n"<<startPos(head);

}