#include<bits/stdc++.h>
using namespace std;

class graph{
    
    unordered_map< int,list<int> > g;
    unordered_map<int, bool> v;
    int ver;

    void ConnectedComponentPrint(int src){
        v[src] = true;
        cout<<src<<" ";
        for(auto it: g[src]){
            if(!v[it]){
                ConnectedComponentPrint(it);
            }
        }
    }

public: 
    graph(int ver){
        this->ver = ver;
    }
    void AddEdge(int s,int e){
        g[s].push_back(e);
        g[e].push_back(s);
    }
    void findConnected(){
        for(int i=0;i<ver;i++){
            v[i]=false;
        }
        for(int i=0;i<ver;i++){
            if(!v[i]){
                ConnectedComponentPrint(i);
                cout<<endl;
            }
        }
    }
};

int main(){
    graph g(10);
    g.AddEdge(0,1);
    g.AddEdge(0,3);
    g.AddEdge(6,7);
    g.AddEdge(3,4);
    g.AddEdge(4,5);
    g.AddEdge(8,9);
    g.findConnected();
    return 0;
}