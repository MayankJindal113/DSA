// For a real time scenario use the functions like insertAtHead etc for insertion don't directly make them in int main()
// 1. Check Palindrome in linked list  Leetcode -234
// 2. Remove Duplicate Elements in a sorted linked list
// 3. Remove Duplicate Elements from an unsorted linked list
// 4. Sort 0/1/2's from a linked list (unsorted)
// 5. Given 2 lists, with the digits of two numbers each, add the numbers and return the sum of numbers as the linked list
// 6. Add 1 to a linked list
// 7. Merge two linked lists into a single list

#include<iostream>
using namespace std;
class Llist
{
    public:
    int keemat;
    Llist * agliNode;
    Llist(int keemat){
        this ->keemat= keemat;
        this->agliNode= NULL;
    }
};

void printList(Llist *head){

    if (head ==NULL)
    {
        // cout<<"Empty List";
        return;
    }
    
    cout<<head->keemat<<endl;
    head=head->agliNode;
    printList(head);   
}

Llist * sort0(Llist*& head){
    // First we create thre nodes pointing to each 0,1,2 list

    if (!head||!head->agliNode)
    {
        return head;
    }

    Llist*zeroHead = new Llist(-101);
    Llist*zeroTail=zeroHead;

    Llist*oneHead = new Llist(-190);
    Llist*oneTail=oneHead;
    
    Llist*twoHead = new Llist(-1112);
    Llist*twoTail=twoHead;

    // Now we iterate over the list and assign the zero's, 1's and 2's to respective lists
    Llist* temp=head;
    cout<<temp->keemat;
    while(temp)
    {          
            if (temp->keemat==0)
            {
                // Llist* temp=head;
                zeroTail->agliNode=temp;
                temp=temp->agliNode;
                zeroTail=zeroTail->agliNode;
                zeroTail->agliNode=NULL;
            }
            else if (temp->keemat==1)
            {
                oneTail->agliNode=temp;
                temp=temp->agliNode;
                oneTail=oneTail->agliNode;
                oneTail->agliNode=NULL;
            }
            else if (temp->keemat==2)
            {
                twoTail->agliNode=temp;
                temp=temp->agliNode;
                twoTail=twoTail->agliNode;
                twoTail->agliNode=NULL;
            }
    }

    // Delete the dummy nodes for each and join the lists obtained
    
    temp=NULL;

    temp= oneHead;
    oneHead=oneHead->agliNode;
    temp->agliNode=NULL;
    delete temp;

    temp= twoHead;
    twoHead=twoHead->agliNode;
    temp->agliNode=NULL;
    delete temp;

    //  JOIN 
    if (oneHead)
    {
        if (twoHead)
        {
            zeroTail->agliNode=oneHead;
            oneTail->agliNode= twoHead;
        }
            zeroTail->agliNode=oneHead;
    }
    else{
        if (twoHead)
        {
            zeroTail->agliNode= twoHead;
        }
    }
    // Delete the dummy node of zero list
    temp= zeroHead;
    zeroHead=zeroHead->agliNode;
    temp->agliNode=NULL;
    delete temp;

    cout<<"After Sorting";
    printList(zeroHead);
    return zeroHead;
}

void insertPeeche(Llist *&head){
    
    int data;
    cout <<"Value : ";
    cin >>data;
    Llist *ptr;
    ptr = new Llist (data);

    if (head ==NULL){
        head = ptr;
        return;
        // return head;
    } 

    Llist *temp= head;
    while (temp->agliNode){
        temp=temp->agliNode;
    }
    temp->agliNode= ptr;
    return ;
    // return head;
}

Llist *removeDuplicate(Llist *head){
    
    if (head ==NULL || head ->agliNode== NULL){
        return head;
    } 
   
    Llist *temp= head;
    
    while (temp->agliNode){
        // cout<<"here;";
        if (temp->keemat==temp->agliNode->keemat)
        {
            cout<<"here";
            Llist* temp2= temp->agliNode;
            temp->agliNode=temp2->agliNode;
            temp2->agliNode=NULL; // ** Is this step needed ? Yes, sometimes it may make the whole list deleted
            delete temp2;
            // return head;
        }
        else{ // This else is important, otherwise in case of (10, 20, 20, 20) this would fail !!
        temp=temp->agliNode;
        }
    }
    return head;
    // return head;
}

int main()
{
    Llist *head=NULL;
    while(1)
    {
        cout<<"Continue ? :\n";
        bool a = 0;
        cin>> a;
        if (a)
        {
            insertPeeche(head);
        }
        else {
            break;
        }
    }
    printList(head);
    // head =removeDuplicate(head);
    sort0(head);
    // cout<<"After sorting : \n";
    // printList(head);
}