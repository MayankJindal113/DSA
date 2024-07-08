#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node() // constructor
    {
        this->left,this->right=NULL;
    }

};

node* createTree(node*r)
{

    int data;
    cout<<"Enter the data for the node of the tree\n";
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node *root=new node() ;
    root->data=data;
    
    root-> left = createTree(root->left);
    root-> right =createTree(root->right);
    return root;  
}

void inorder(node* root, int &h)
{
    if(root==NULL)
    {
        return;
    }
    h++;  //0    //1
    cout<<root->data<<endl;
    inorder(root->left,h);
    inorder(root->right,h);
}


int main()
{
    // node *r=NULL;
    node*root;
    root=createTree(0);
    int h=-1;
    inorder(root, h);
}