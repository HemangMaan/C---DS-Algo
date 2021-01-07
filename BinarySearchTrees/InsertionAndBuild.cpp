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
//accepts old root and data and return new node with bst
node* InsertToBST(node* root,int data){
    //base case 
    if(root==NULL){
        return new node(data);
    }
    if(data<=root->data){
        root->left = InsertToBST(root->left,data);
    }
    else
    {
        root->right = InsertToBST(root->right,data);
    }
    return root;
}

node* build(){
    //read the inputs till user gives -1 and call for making bst
    int d;
    cin>>d;
    node* root = NULL;
    while(d!=-1){
        root = InsertToBST(root,d);
        cin>>d;
    }
    return root;
}
//inorderprint of the bst
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

bool searchBST(node* root,int data){
    if(root->data==data){
        return true;
    }
    if(data<=root->data){
        return searchBST(root->left,data);
    }
    else
    {
        return searchBST(root->right,data);
    }
}

node* deleteInBST(node* root,int data){
    if(root==NULL){
        return NULL;
    }
    if(root->data>data){
        root->left = deleteInBST(root->left,data);
    }
    if(root->data==data){
        //check and work acc. to number of nodes
        //case when no child nodes
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }
        //case when one root have one child
        if(root->left==NULL and root->right!=NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        if(root->left!=NULL and root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        //case when root have both childrens
        if(root->left!=NULL && root->right!=NULL){
            node *replace = root->right;
            while(replace->left!=NULL){
                replace = replace->left;
            }
            root->data = replace->data;
            root->right = deleteInBST(root->right,replace->data);
            return root;
        }
    }
    if(root->data<data){
        root->right = deleteInBST(root->right,data);
    }
    return root;
}

bool isBST(node *root,int minV=INT_MIN,int maxV=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data<=maxV && root->data>=minV && isBST(root->left,minV,root->data) && isBST(root->right,root->data,maxV)){
        return true;
    }
    return false;
}

int main(){
    node* root = build();
    inorderPrint(root);
    if(searchBST(root,3)){
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    root = deleteInBST(root,3);
    inorderPrint(root);
    if(isBST){
        cout<<"BST"<<endl;
    }
    else
    {
        cout<<"NOT BST"<<endl;
    }
    
}