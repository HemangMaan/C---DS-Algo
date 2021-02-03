#include<bits/stdc++.h>
using namespace std;

class Graph{

    unordered_map<string , list<pair<string, int> > > l;
public:
    void AddEdge(string x,string y, bool bidir, int wt){
        l[x].push_back(make_pair(y, wt));
        if(bidir){
            l[y].push_back(make_pair(x, wt));
        }
    }

    void PrintAdjList(){
        for(auto m:l){
            cout<<m.first<<" -> | ";
            for(auto r:m.second){
                cout<<r.first<<","<<r.second<<" | ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.AddEdge("A","B",true,20);
    g.AddEdge("A","C",true,40);
    g.AddEdge("A","D",false,25);
    g.AddEdge("B","C",true,30);
    g.AddEdge("C","D",true,45);
    g.PrintAdjList();
}