#include<bits/stdc++.h>
using namespace std;

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

node* BTWithArray(vector<int> &arr,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    node* root = new node(arr[mid]);
    root->left = BTWithArray(arr,s,mid-1);
    root->right = BTWithArray(arr,mid+1,e);
    return root;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    node* r = BTWithArray(arr,0,arr.size()-1);
    bfs(r);
}