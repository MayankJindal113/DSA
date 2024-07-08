// HW
// Do all these using iterative method
// Build Tree using level order traversal
// COnvered in this file - In/Pre/Post order traversal

#include<iostream>
using namespace std;
class tree
{   
    public:
    int data;
    tree * left;
    tree * right;
    tree(int d)
    {
        this->data= d;
        this->left=NULL;
        this->right=NULL;
    }
};

tree* createTree()
{
    cout<<"Enter the data ";
    int d ;
    cin>>d;
    if(d==-1)
    {
        return NULL ;
    }
    tree * root= new tree(d);
    
    cout<<"Enter the val for the left child of node : "<<d;
    root->left=createTree();
    cout<<"Enter the val for the right child of node : "<<d;
    root->right=createTree();

    return root;

}

void inorderTraversal(tree*root) //LNR - Left Node Right 
{
    if(root==NULL)
    {
        return ;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(tree*root)    // NLR
{   
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(tree*root)    // LRN
{   
    if(root==NULL)
    {
        return ;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";

}


int main()
{
    tree* root = createTree();
    inorderTraversal(root);

}