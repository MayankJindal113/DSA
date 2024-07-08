// Lowest Common Ancestor of Binary Tree - ( Microsoft interview ) --  236 Leetcode
// Kth Ancestor
// HW - Solve using vector

#include <iostream>
#include <vector>

using namespace std;

class tree
{
public:
    int val;
    tree *left;
    tree *right;
    tree(int data) // Constructor
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};

tree *buildTree()
{
    int d;
    cout << "Enter the data for the node\n";
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    tree *root = new tree(d);
    // root->val=d;

    cout << "Enter the data for the left child of node " << d << endl;
    root->left = buildTree();
    cout << "Enter the data for the right child of node " << d << endl;
    root->right = buildTree();

    return root;
}

vector<int> inorder(tree *root, vector<int> &nodes)

{
    if (root == NULL)
    {
        nodes.push_back(-1);
        return nodes;
    }

    inorder(root->left, nodes);
    nodes.push_back(root->val);
    inorder(root->right, nodes);

    return nodes;
}

// bool find(tree *root, int p, int &k, int &anc)
// {

//     if (k == 0)
//     {
//         anc = root->val;
//         cout << "k th ancestor of " << p << "is " << anc << endl;
//         k--;
//     }

//     if (root == NULL)
//     {
//         return false;
//     }
//     if (root->val == p)
//     {
//         return true;
//     }
//     bool left = find(root->left, p, k, anc);
//     bool right = find(root->right, p, k, anc);
//     if (left || right)
//     {
//         k--;
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }




bool kAncestor(tree *root, int p, int &k)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == p)
    {
        return true;
    }
    bool left = kAncestor(root->left, p, k);
    bool right = kAncestor(root->right, p, k);

    if (left || right)
    {
        k--;
    }
    if (k == 0)
    {
        cout << root->val << endl;
        k--;
    }
    return left || right;
}

int main()
{
    vector<int> nodes;
    tree *root = buildTree();
    inorder(root, nodes);
    cout << "The constructed tree is as follows\n";
    for (int i = 0; i < nodes.size(); i++)
    {
        cout << nodes[i] << endl;
    }
    int anc = 0, p = 20, k = 2;

    cout << k << " th ancestor of " << p << " is : ";
    kAncestor(root, p, k);
}