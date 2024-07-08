// Trees - Non Linear DS.... (One node may be connected to multiple nodes)
// Linked List - Linear DS

// Traversal -- Level Order | Inorder | Preorder | Postorder| Morris Traversal
// Trees skewed towards one side- Skewed Trees

// Covered in lec 1 - [ Level Order | Inorder | Preorder | Postorder | Diameter | Height of tree ]

// Let's Build a Tree ,, we'll be using the concept of classes to create the node of the tree and lil bit of recursion for further functions

// Level Order Traversal to traverse the tree 




#include<iostream>
#include<queue>
using namespace std;
class Node
{   
    public:
    int data;   // Val of node
    Node* left; // left-right pointers to Node type of data
    Node* right;
    
    Node(int data) // contructor
    {
        this->data= data;
        left=NULL;
        right=NULL;
    }
};


Node* buildTree(int &flag)
{
    int a=0;
    cout<<"Enter the data"<<endl;
    cin>>a;
    flag++;
    if(a==-1)
    {
        flag--;
        return NULL;
    }

    Node* root= new Node(a);

    cout<<"Enter the val for left child for the node : "<<a<<endl;        
    root->left=buildTree(flag);
    cout<<"Enter the val for right child for  the node :"<<a<<endl;        
    root->right=buildTree(flag);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        
        Node *temp= q.front();
        
        q.pop();      
            if(temp==NULL)
            {
                cout<<endl;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                cout<<temp->data<<" ";
                if(temp->left)
                {   
                    q.push(temp->left);
                }
                if(temp->right)
                {   
                    q.push(temp->right);
                }
            }
    }
}


int main()
{
    int no_of_nodes=0;
    Node* treeRoot= buildTree(no_of_nodes);
    cout<<"Tree Created Successfully"<<endl<<"Tree Root Node returned";
    cout<<endl<<"Number of nodes in the tree :"<<no_of_nodes;
    cout<<endl;
    levelOrderTraversal(treeRoot);
}