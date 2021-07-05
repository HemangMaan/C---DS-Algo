#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

class Graph
{
private:
    unordered_map<int,list<int>> m;
    int v;
    bool *visited;
    int *parent;
    bool *dfsparentstack; 
public:
    Graph(int v){
        this->v = v;
        visited = new bool[v];
        parent = new int[v];
        dfsparentstack = new bool[v];
    }
    ~Graph(){
        cout<<"variable destroyed"<<endl;
    }
    void AddEdge(int x,int y){
        m[x].push_back(y);
        m[y].push_back(x);
    }
    bool CycleBFS(int n){
        for(int i=0;i<v;i++){
            visited[i]=false;
            parent[i]=i;
        }
        queue<int> q;
        q.push(n);
        visited[n]=true;
        while(!q.empty()){
            int val = q.front();
            q.pop();
            for(auto it:m[val]){
                if(visited[it] && parent[val]!=it){
                    return true;
                }
                else if(!visited[it]){
                    visited[it]=true;
                    parent[it]=val;
                    q.push(it);
                }
            }
        }
        return false;
    }
    bool cycle_helper(int node,bool *visited,int parent){
        visited[node]=true;
        for(auto nbr:m[node]){
            // two cases
            if(!visited[nbr]){
                //go and recursively visit the nbr
                bool cy=cycle_helper(nbr,visited,node);
                if(cy)
                    return true;
            }
            // when the nbr is visited but should not be equal to parent
            else if(nbr!=parent){
                return true;
            }
        }
        return false;
    }
    bool CycleDFS(int node){
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        return cycle_helper(node,visited,-1);
    }
};


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    Graph g(5);
    g.AddEdge(0,1);
    g.AddEdge(0,3);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.AddEdge(4,5);
    if(g.CycleDFS(0)){
        cout<<"Cycle Present"<<endl;
    }
    else{
        cout<<"Cycle Not Present"<<endl;
    }
    return 0;
}