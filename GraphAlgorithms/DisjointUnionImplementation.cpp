#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

class Graph
{
private:
    int v=0;
    vector<pair<int,int>> edgelist;
public:
    Graph(int v){
        this->v=v;
    }
    void AddEdge(int a,int b){
        edgelist.push_back(make_pair(a,b));
    }
    //find the path by recursion
    int find(int a,int parent[]){
        if(parent[a]==-1){
            return a;
        }
        // path compression optimisation by updating the nodes with original parent after every call 
        return parent[a] = find(parent[a],parent);
    }
    // merging two sets by finding their parent nodes
    void union_set(int a,int b,int parent[],int rank[]){
        //finding parent node
        int s1 = find(a,parent);
        int s2 = find(b,parent);
        //checking if they both have same parent if they have means their is cycle if not then we merge them.
        if(s1!=s2){
            //union by rank optimisation
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
    bool contain_cycle(){
        int *parent = new int[v];
        int *rank = new int[v];
        //making every node it's own parent
        for(int i=0;i<v;i++){
            parent[i]=-1;
            rank[i]=1;
        }
        //iteration all edgelists and merging the one with different parents.
        for(auto edge:edgelist){
            int s1 = find(edge.first,parent);
            int s2 = find(edge.second,parent);
            if(s1!=s2){
                union_set(s1,s2,parent,rank);
            }
            else{
                cout<<"same parents"<<s1<<" and "<<s2<<endl;
                return true;
            }
        }
        delete []parent;
        return false;
    }
};


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,0); 
    if(g.contain_cycle()){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}