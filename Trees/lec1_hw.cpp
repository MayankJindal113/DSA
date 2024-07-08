// ** Check if 2 trees are identical (DONE)-- DO try It OUT 
//  ** Check if 2 trees are mirror image of each other
//  ** Balanceed Binary Tree


#include<iostream>
#include<vector>
using namespace std;

class Node
{   
    public:
    int data;   // Val of node
    Node* left; // left-right pointers to Node type of data
    Node* right;
    
    Node(int data)
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

vector<int> postorder(Node* root,vector<int>&nodes) // postorder Traversal - Firstly tried it out using inorder but one case wasnt satisfied
// i.e :: 
//      1      1
//     |        |
//    1          1

// As in this case the inorder traversals for both came out to be the same
{
    
    if(root==NULL)
    {
        nodes.push_back(-1);
        return nodes;
    }

    postorder(root->left,nodes);
    postorder(root->right,nodes);

    nodes.push_back(root->data);

   
    return nodes;
}

int areVectorsEqual(const std::vector<int> &vector1, const std::vector<int> &vector2) {
    // Check if the vectors have the same size
    if (vector1.size() != vector2.size()) {
        return 0; // Vectors are different if sizes are different
    }

    // Compare elements of the vectors
    for (size_t i = 0; i < vector1.size(); ++i) {
        if (vector1[i] != vector2[i]) {
            return 0; // Elements are different, vectors are different
        }
    }

    // All elements are the same, vectors are equal
    return 1;
}
vector<int> inorder(Node* root,vector<int>&nodes) 

{
    if(root==NULL)
    {
        nodes.push_back(-1);
        return nodes;
    }

    inorder(root->left,nodes);
    nodes.push_back(root->data);
    inorder(root->right,nodes);

    return nodes;
}



bool areVectorsmirror(const vector <int>&vec1,const vector <int>&vec2){
    if(vec1.size()!= vec2.size())
    {
        return false;
    }
    for(int i=0; i<vec1.size();i++)
    {
        if(vec1[i]!= vec2[vec1.size()-1-i])
        {
            return false;
        }
    }
}


int main()
{
    int nodes1=0;
    int nodes2=0;
    Node* treeRoot1= buildTree(nodes1);
    Node* treeRoot2= buildTree(nodes2);
    cout<<"Tree Created Successfully"<<endl<<"Tree Root Node returned";
    cout<<endl<<"Number of nodes in the tree1 :"<<nodes1;
    cout<<endl<<"Number of nodes in the tree2 :"<<nodes2;
    cout<<endl;

    vector<int>nodesv1;
    vector<int>nodesv2;

    vector <int>n1 = inorder(treeRoot1 , nodesv1);
    vector <int>n2 = inorder(treeRoot2 , nodesv2);

    // std::reverse(n2.begin(),n2.end());

    // int result = areVectorsEqual(n1,n2);
    if(areVectorsmirror(n1,n2)){
        cout<<"Mirror";
    }
    else{
        cout<<"Not-Mirror";
    }

    // if(result==1)
    // {
    //     cout<<"Identical";
    // }
    // else{
    //     cout<<"Unidentical";
    // }
}