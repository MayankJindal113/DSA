// Diameter of a Tree 
// LeetCode - 543
// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
// This path may or may not pass through the root. 
//  Length is the number of edges between the nodes....

// ** Check if 2 trees are identical
//  ** Check if 2 trees are mirror image of each other
//  ** Balanceed Binary Tree


#include<iostream>
#include<vector>
#include<queue>
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


int height(tree*root)
{
    vector <int>lens;
    if(root==NULL)
    {
        return 0;
    }
    
    int lheight=height(root->left);
    int rheight=height(root->right);
    lens.push_back(lheight+rheight+2);
    int maxH= max(lheight, rheight) +1;
    return maxH;
}

// int dia(tree * root)

int main()
{
    tree* root = createTree();

}