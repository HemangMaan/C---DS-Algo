#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T,list<T> > m;
    unordered_map<T,bool> v;
    unordered_map<T,int> level;
    queue<T> q;
public:
    void AddEdge(T s,T e){
        m[s].push_back(e);
        m[e].push_back(s);
    }
    void SSSbfs(T src){
        q.push(src);
        v[src] = true;
        level[src] = 0;
        while(!q.empty()){
            T node = q.front();
            q.pop();
            cout<<node<<" "<<level[node]<<endl;
            for(auto it : m[node]){
                if(!v[it]){
                    q.push(it);
                    v[it]= true;
                    level[it] = level[node]+1;
                }
            }
        }
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
    g.SSSbfs(0);
    return 0;
}