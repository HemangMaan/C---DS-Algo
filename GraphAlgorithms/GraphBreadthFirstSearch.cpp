#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T,list<T> > m;
    unordered_map<T,bool> v;
    queue<T> s;
public:
    void AddEdge(T f,int s){
        m[f].push_back(s);
        m[s].push_back(f);

    }
    void bfsprint(T f){
        s.push(f);
        v[f] = true;
        while(!s.empty()){
            T node = s.front();
            s.pop();
            cout<<node<<" ";
            for(auto n : m[node]){
                if(!v[n]){
                    s.push(n);
                    v[n]=true;
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
    g.bfsprint(0);
    return 0;
}
