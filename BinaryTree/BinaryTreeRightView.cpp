#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void RightViewBT(node* root, int level,int &maxlevel){
    if(root == NULL)
        return;
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel = level;
    }
    RightViewBT(root->right, level+1,maxlevel);
    RightViewBT(root->left,level+1,maxlevel);
}

int main(){
    node*r = buildTree();
    int maxlevel = -1;
    RightViewBT(r,0,maxlevel);
}