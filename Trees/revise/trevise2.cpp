#include<iostream>
#include <vector>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int d) // constructor
    {
        this->left,this->right=NULL;this ->data = d;
    }
};

node* createTree(node* r)
{
    int data;
    cout<<"Enter the data for the node of the tree\n";
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node *root=new node(data) ;
    // root->data=data;
    
    root-> left = createTree(root->left);
    root-> right =createTree(root->right);
    return root;  
}

node* createTreeStatic(node* r)
{
    int data;
    cout<<"Enter the data for the node of the tree\n";
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    // node *root=new node(data) ;
    node root (data);
    node *q = &root;
    // root->data=data;
    
    q-> left = createTree(q->left);
    q-> right =createTree(q->right);
    return q;  
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

void traverSal(node*root)
{
    if (root==NULL){return ;}
    cout << root->data<<endl;
    traverSal(root->left);
    traverSal(root->right);
}

bool mirrorCheck(node*root1, node*root2){
    if (!root1 && !root2)
    {
        return true;
    }
    else if ((!root1 && root2)||(root1 && !root2))
    {
        return false;
    }

    if (root1->data != root2 ->data){
        return false;
    }
    bool a = mirrorCheck(root1->left, root2->right);
    bool b = mirrorCheck(root1->right, root2->left);
    return a&&b;
}

bool kthNode (node*root, int &k, node*p)
{   
    if (root==NULL)return false;
    if (root->data == p->data) return true;
    bool leftAns = kthNode(root->left, k, p);
    bool rightAns = kthNode(root->right, k, p);
    if (leftAns||rightAns){
        k--;
    }
    if (k==0) cout <<endl<< root->data << " is the kth ancestor";
    return false;
}

// Second method for finding the kth ancestor of a node :


int kthAncestor (node*root, int k, node*p, vector<int>&ans){
        if (root == NULL){return -1;}
        if (root->data == p->data){
            int n = ans.size();
            if (n>= k) {return ans[n-k];}
            else{return -1;}
        }
        ans.push_back(root->data);
        int left = kthAncestor(root->left, k, p, ans);
        if (left!=-1) return left;
        int right = kthAncestor(root->right, k, p, ans);
        if (right!=-1)return right;
        ans.pop_back();
        return -1;
}

int main()
{

    node *root = createTree(0);
    node *p = new node(2);
    int k = 2;
    vector<int>ans;
    cout <<kthAncestor(root, k, p, ans);
    // node *r=NULL;
    // node*root;
    // root=createTree(0);
    // int h=-1;
    // inorder(root, h);
    // node a(2) ;
    // node*c ;
    // c= createTreeStatic(c);
    // traverSal(c);
    // cout << c->left->data;
    // node*root1 = createTree(0);
    // node* p = new node(10);
    // int k = 2;
    // kthNode(root1, k, p);
    // node*root2 = createTree(0);
    // cout<<(mirrorCheck(root1,root2)? "The trees are mirror": "The trees are not mirror");
}