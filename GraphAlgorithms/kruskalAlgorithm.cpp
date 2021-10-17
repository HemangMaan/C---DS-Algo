#include<bits/stdc++.h>
using namespace std;

class DSU{
    int v;
    vector<int> parent,rank;
public:
    DSU(int v):parent(v,-1),rank(v,1){
        this->v=v;
    }
    int find(int x){
        //if the value is parent
        if(parent[x]==-1){
            return x;
        }
        //path compression optimisation
        return parent[x]=find(parent[x]);
    }
    void unite(int x,int y){
        int s1 = find(x);
        int s2 = find(y);
        if(s1!=s2){
            //union by rank optimization
            if(rank[s1]>rank[s2]){
                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
            else{
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }
        }
    }
};

class graph{
    int v,weight=0;
    vector<vector<int>> edgelist;
public:
    graph(int v){
        this->v=v;
    }
    void AddEdge(int x,int y,int w){
        edgelist.push_back({w,x,y});
    }
    int mst(){
        //1. sort the edgelists based on weights
        sort(edgelist.begin(),edgelist.end());
        //iterate and make the spanning tree
        DSU d(v);
        for(auto it:edgelist){
            int w = it[0];
            int x = it[1];
            int y = it[2];
            //check if they have same parent;
            if(d.find(x)!=d.find(y)){
                d.unite(x,y);
                weight+=w;
            }
        }
        return weight;
    }
};

int main(){
    graph g(4);
    g.AddEdge(0,1,1);
    g.AddEdge(1,3,3);
    g.AddEdge(3,2,4);
    g.AddEdge(2,0,2);
    g.AddEdge(0,3,2);
    g.AddEdge(1,2,2);
    cout<<g.mst()<<endl;
}