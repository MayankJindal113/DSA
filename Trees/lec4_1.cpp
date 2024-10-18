// Lect III is empty
// IMP:
// Inorder and Preorder given for a binary tree : Construct the tree / Give Post order traversal
// *https://www.geeksforgeeks.org/problems/construct-tree-1/1

// Inorder and Postorder given for a binary tree : Construct the tree / Give Post order traversal

// Vertical Order Traversal
// Algo :

// map <int, vector<int>> : stores the index as key corresponding the node list in the same vertical line, ie. they will
// have the same index
// traverse this map's keys from lowermost to the highest;
// problem : will not make a vertical up to down traversal; might have random order;

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class Tree_Node
{
    public:
    // node val, left, right child
    int val;
    Tree_Node*left;
    Tree_Node*right;
    Tree_Node(int d){
        this->val = d;
        this ->left= NULL;
        this ->right= NULL;
    }
};
Tree_Node* creatTree(){

    cout << "Enter the val for the next node(-1 for no node) \n";
    int val;
    cin>>val;
    if (val==-1){return NULL;}
    Tree_Node* root= new Tree_Node(val);
    // node created
    cout << "Enter the val for the left child of the node:"<<val<<endl;
    root->left= creatTree();
    cout << "Enter the val for the right child of the node:"<<val<<endl;
    root->right= creatTree();
    return root;
}

void inorderTraversal(Tree_Node*root)
{
    //  LNR
    if (root == NULL){return;}
    inorderTraversal(root->left);
    cout<< root->val<<endl;
    inorderTraversal(root->right);  
}

void levelTraversal( queue<Tree_Node*>&q, int &level)
{   
    Tree_Node*node = q.front();

    // if (!node&&q.back()==node){ return; }//There is only NULL present in the queue then reutrn
    if (!node){
        q.pop();
        if (q.empty()){return ;}
        q.push(node); level++; cout<<endl<<"Level "<<level<<" elements :";
    } // If there are more element + front == NULL
    else{
    cout << node->val<< " ";
    if (node->left){ q.push(node->left); }
    if (node->right){ q.push(node->right); }
    q.pop();
    }
    levelTraversal(q, level);
}
    //push the root if not null
    // if the first element is null then next level has started
    // 

int main()
{
    queue<Tree_Node*>q;
    Tree_Node*root;
    root=creatTree();
    // inorderTraversal(root);
    int level=0;
    q.push(root);
    q.push(NULL);
    levelTraversal(q, level);
}