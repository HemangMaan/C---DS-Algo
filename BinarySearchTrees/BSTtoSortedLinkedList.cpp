#include<bits/stdc++.h>
using namespace std;

class node
{
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

class linkedlist{
    public:
        node* head;
        node* tail;
};

linkedlist flatten(node* root){
    linkedlist l;
    //when root is null
    if(root==NULL){
        l.head=l.tail=NULL;
        return l;
    }
    // when both nodes are empty
    if(root->left==NULL && root->right==NULL){
        l.head=l.tail=root;
        return l;
    }
    //when right node is empty
    if(root->left!=NULL && root->right==NULL){
        linkedlist leftLL = flatten(root->left);
        leftLL.tail->right = root;

        l.head = leftLL.head;
        l.tail = root;
        return l;
    }
    //when left node is empty
    if(root->right!=NULL && root->left==NULL){
        linkedlist rightLL = flatten(root->right);
        root->right = rightLL.head;

        l.head = root;
        l.tail = rightLL.tail;
        return l;
    }

    //when both nodes are not empty
    linkedlist leftLL = flatten(root->left);
    linkedlist rightLL = flatten(root->right);

    leftLL.tail->right = root;
    root->right = rightLL.head;

    l.head = leftLL.head;
    l.tail = rightLL.tail;
    return l;
}

node* BST(node* root,int d){
    if(root==NULL){
        return new node(d);
    }
    if(root->data>=d){
        root->left = BST(root->left,d);
    }
    else
    {
        root->right = BST(root->right,d);
    }
    return root;
}

node* createNode(){
    int d;
    cin>>d;
    node* root = NULL;
    while(d!=-1){
        root = BST(root,d);
        cin>>d;
    }
    return root;
}

void InOrder(node* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    return;
}

void flattenLLprint(node* l){
    if(l==NULL){
        return;
    }
    cout<<l->data<<" --> ";
    flattenLLprint(l->right);
}

int main(){
    node* root = createNode();
    InOrder(root);
    cout<<endl;
    linkedlist l = flatten(root);
    node * ll = l.head;
    flattenLLprint(ll);
    return 0;
}