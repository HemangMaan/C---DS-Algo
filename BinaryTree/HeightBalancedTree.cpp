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

void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

class HBPair{
    public:
        int height;
        bool balance;
};
HBPair HeightBalanced(node* root){
    HBPair p;
    if(root == NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }
    HBPair left = HeightBalanced(root->left);
    HBPair right = HeightBalanced(root->right);
    p.height = left.height + right.height + 1;
    if(abs(left.height - right.height)<=1 && left.balance==true && right.balance==true){
        p.balance = true;
    }
    else
    {
        p.balance = false;
    }
    return p;
}
int main(){
    node* r = createNode();
    
    bfs(r);
    if(HeightBalanced(r).balance){
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }
    
}
