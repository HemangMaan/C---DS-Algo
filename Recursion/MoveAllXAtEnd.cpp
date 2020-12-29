#include<bits/stdc++.h>
using namespace std;

void MoveAtEnd(queue<char> &q,int i,int s,int cnt){
    if(i==s){
        while(cnt--){
            q.push('x');
        }
        return;
    }
    if(q.front()!='x'){
        char temp = q.front();
        q.pop();
        q.push(temp);
    }
    else
    {
        cnt++;
        q.pop();
    }
    MoveAtEnd(q,i+1,s,cnt);
}


int main(){
    string n;
    cin>>n;
    queue<char> q;
    for(int i=0;i<n.size();i++){
        q.push(n[i]);
    }
    MoveAtEnd(q,0,n.size(),0);
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}