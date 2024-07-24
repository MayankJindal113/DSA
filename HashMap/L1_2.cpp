// Check if a linked list is circular/loop present in a linked list?
// Leetcode - 242 Valid Anagram
// UNION OF 2 LINKED LISTS : https://www.geeksforgeeks.org/problems/union-of-two-linked-list/1
// Have a look at the above ques, gfg - Linked List


// NOTE THAT : map sorts the values on the basis of the value of key and thus time complexity O(log n)
// Whereas, unordered_map gives randomly O(1)

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

bool checkLoop(Node*head){
    unordered_map<Node*, bool>m;
    
    // LOGIC I :
    // Implement the searching in O(1) only
    // while(head){
    //     if (m.find(head)!=m.end()){
    //         // This line checks if the current head node is already in the map m. 
    //         // The find function returns an iterator to the element if it is found, otherwise, it returns m.end().
    //         //  If the node is found in the map, it means the node has been visited before, indicating a loop.
    //     // if (m.find(head) != m.end()) {
    //         return true;
    //     }
    //     m[head] = true;
    //     head = head->next;
    // }
    // return false;
    

    while(head){
        if (m[head]) return true;
        m[head]=true;
        head=head->next;
    }
    return false;
}

int main()
{
    map<char, int>m;
    // unordered_map<char, int>m;

    string s = "thiruvananthapuram";
    
    for (int i = 0 ; i < s.size(); i++){
        m[s[i]]++;
    }
    for (auto i :m){
        cout<< i.first<< " occurs : "<<i.second<<" number of times"<<endl;
    }

    
// CheckLoop in Linked List
    // Node* n1 = new Node(10);
    // Node* n2 = new Node(3);
    // Node* n3 = new Node(9);
    // Node* n4 = new Node(5);
    // Node* n5 = new Node(2);
    // Node* head = n1 ;
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;
    // n5->next = NULL;
    // std::cout<<  (checkLoop(head)? "Loop is present" : "Loop not present" );

}