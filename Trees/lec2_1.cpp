// Balanced Binary Serch Tree
// Atmost 2 childs of a node -Binary Tree
// Fully(perfect) Binary tree- complete - all nodes with 2 childs , except leaf
// Complete - Nodes from left to right filled
// **Balanced Binary Tree - Max df in height <= 1 of left and right subtree for every node
// Convert the given tree into Sum Tree - the node should be equal to the sum of its descendant nodes and itself :
// https://www.geeksforgeeks.org/problems/sum-tree/1
// *https://www.geeksforgeeks.org/problems/transform-to-sum-tree/1

#include<iostream>
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
    if(root==NULL)
    {
        return 0;
    }
    
    int lheight=height(root->left);
    int rheigth=height(root->right);
    int maxH= max(lheight, rheigth) +1;
    return maxH;
}
bool isBalanced(tree* root) {
        if(root==NULL)
        {
            return true;
        }

    int l = height(root->left);
    int r = height(root->right);
    int diff= abs(l-r);

    bool ans= (diff<=1);

    bool leftans= isBalanced(root->left);
    bool rightans= isBalanced(root->right);

    if(leftans && rightans && ans)
    {
        return true;
    }
    else{
        return false;
    }
}


void levelOrderTraversal(tree* root){
    queue<tree*>q;

    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        
        tree *temp= q.front();
        
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
int converttoSum(tree *&root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lchild= converttoSum(root->left);
    int rchild= converttoSum(root->right);

    root->data+= lchild+rchild;

    return root->data;
}   


int main()
{

    tree * root;
    root=createTree();
    levelOrderTraversal(root);
    if(isBalanced(root)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    converttoSum(root);
    levelOrderTraversal(root);
    // cout<<"Hell"<<""<<"o"<<" "<<"w";
}