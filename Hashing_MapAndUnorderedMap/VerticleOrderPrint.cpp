#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left,*right;
    node(int data){
        this->data = data;
        left=right=NULL;
    }
};

void VerticleOrderPrint(node* tree,map<int , vector<int> > &m,int d){
    if(tree==NULL){
        return;
    }
    m[d].push_back(tree->data);
    VerticleOrderPrint(tree->left,m,d-1);
    VerticleOrderPrint(tree->right,m,d+1);
    return;
}

int main(){
    node *tree = new node(1);
    tree->left = new node(2);
    tree->right = new node(3);
    tree->left->left = new node(4);
    tree->left->right = new node(5);
    tree->right->left = new node(6);
    tree->right->right = new node(7);
    tree->right->right->right = new node(8);
    tree->left->right->right = new node(9);

    map<int , vector<int> > m;
    int d =0;
    VerticleOrderPrint(tree,m,d);
    for(auto it:m){
        cout<<it.first<<" : ";
        for(int i:it.second){
            cout<<i<<" , ";
        }
        cout<<endl;
    }
}