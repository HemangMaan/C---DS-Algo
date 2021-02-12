#include<bits/stdc++.h>
using namespace std;

class Graph{
    unordered_map<int,list<int> > g;
    stack<int> s;
    void dfs(int src,vector<bool> &v){
        v[src] = true;
        for(auto it:g[src]){
            if(!v[it]){
                dfs(it,v);
            }
        }
        s.push(src);
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> v(numCourses,false);
        for(int i=0;i<prerequisites.size();i++){
            g[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!v[i]){
                dfs(i,v);
            }
        }
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
    }
};

int main(){
    int n,k;
    Graph g;
    cin>>n>>k;
    vector<int> preq(2);
    vector<vector<int> > prerequisites;
    for(int i=0;i<k;i++){
        cin>>preq[0];
        cin>>preq[1];
        prerequisites.push_back(preq);
    }
    g.findOrder(n,prerequisites);
}