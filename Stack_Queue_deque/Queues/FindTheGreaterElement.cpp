#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        q.push(v);
    }
    int f = q.front();
    int v1,v2;
    while(!q.empty()){
        v1 = q.front();
        q.pop();
        if(q.empty())
            break;
        v2 = q.front();
        if(v2>v1){
            cout<<v2<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
    if(f>v1){
        cout<<f;
    }
    else
    {
        cout<<"-1";
    }
}