#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T,list<T> > g;
    unordered_map<T,bool> v;
public:
    void AddEdge(T f,T l){
        g[f].push_back(l);
        g[l].push_back(f);
    }
    
    void dfs_helper(T f){
        v[f]=true;
        cout<<f<<" ";
        for(auto it:g[f]){
            if(!v[it]){
                dfs_helper(it);
            }
        }
    }

    void dfs(T f){
        for(auto it : g){
            T node = it.first;
            v[node] = false;
        }
        dfs_helper(f);
    }
};

int main(){
    Graph<int> g;
    g.AddEdge(0,1);
    g.AddEdge(0,3);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.AddEdge(4,5);
    g.dfs(0);
    return 0;
}