#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<int> *l;
public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
    }
    
    int AddEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList(){
        for(int i=0;i<v;i++){
            cout<<i<<" -> ";
            for(int j:l[i]){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(0,2);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.printAdjList();
    return 0;
}