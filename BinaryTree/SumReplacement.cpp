#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
}; 

node* createNode(){
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    node* root = new node(d);
    root->left = createNode();
    root->right = createNode();
    return root;
}

void displayNode(node* root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    displayNode(root->left);
    displayNode(root->right);
}

int SumOfNodes(node* root){
    if(root == NULL)
        return 0;
    return root->data + SumOfNodes(root->left) + SumOfNodes(root->right);
}

node* SumTree(node* root){
    if(root ==NULL){
        return NULL;
    }
    if(root->left!=NULL || root->right!=NULL)
        root->data = SumOfNodes(root) - root->data ;
    else
    {
        root->data = SumOfNodes(root);
    }
    root->left = SumTree(root->left);
    root->right = SumTree(root->right);
    return root;
}

int main(){
    node* r = createNode();
    displayNode(r);
    cout<<endl;
    node* p = SumTree(r);
    displayNode(p);
}
