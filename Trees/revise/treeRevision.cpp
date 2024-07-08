#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    // good coding practice
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* createTree()
{
    cout<<"Enter the data for the node: \n";
    int a ;
    cin>>a;
    
    if(a==-1)
    {
        return NULL;
    }
    node *root= new node(a);

    cout<<"Enter the val for the left child of node : "<<a;
    root->left = createTree();
    cout<<"Enter the val for the right child of node : "<<a;
    root->right = createTree();
    return root;
}


void levelOrder()
{

}


void preOrderPrint(node*root)
{
    if(root==NULL)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<root->data<<endl;
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

int main()
{
    node *root;
    root = createTree();

    cout<<"The nodes for a preorder traversal is as follows :\n";
    preOrderPrint(root);

}