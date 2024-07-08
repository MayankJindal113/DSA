// Height Of Tree / Max depth
// Max no of node/edges is the longest branch in a tree
//  Leetcode -104

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
    tree * root= new tree(d);   // here we initialize an object and give data, the value 'd'
    
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

void levelOrderTraversal(tree* root){
    queue<tree*>q;
    int height=0;
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
                {   height++;
                    q.push(NULL);
                }
            }

            else
            {
                cout<<temp->data;
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
    cout<<"The height of the given tree is : "<<height;   
}


int main()
{
    tree* root = createTree();
    levelOrderTraversal(root);
    cout<<endl<<height(root);
}