#include<bits/stdc++.h>
using namespace std;

class graph{
    int v;
    vector<pair<int,int>> *adj;
public:
    graph(int v){
        this->v = v;
        adj = new vector<pair<int,int>>[v];
    }
    void AddEdge(int x,int y,int w){
        adj[x].push_back(make_pair(y,w));
        adj[y].push_back(make_pair(x,w));
    }
    int mst(){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<bool> vis(v,false);
        int ans=0;
        pq.push({0,0});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(vis[it.second]){
                continue;
            }
            ans+=it.first;
            vis[it.second]=true;
            for(auto p:adj[it.second]){
                if(!vis[p.first])
                    pq.push(p);
            }
        }
        return ans;
    }
};

int main(){
    int ver,ed;
    cin>>ver>>ed;
    graph g(ver);
    for(int i=0;i<ed;i++){
        int x,y,w;
        cin>>x>>y>>w;
        g.AddEdge(x,y,w);
    }
    cout<<g.mst();
}