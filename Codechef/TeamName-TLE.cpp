#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    unordered_map<int,string> team;
    unordered_map<char,int> idx;
    unordered_set<string> name;
    set<string> inp;
    while(t--){
        int n,k=0,x;
        char prev = '.';
        long cnt=0;
        cin>>n;
        team.reserve(n+1);
        name.reserve(n+1);
        string s,n1,n2;
        for(int i=0;i<n;i++){
            cin>>s;
            inp.insert(s);
            name.insert(s);
        }
        idx.insert({prev,0});
        for(auto it : inp){
            team.insert({k,it});
            char p = team[k][0];
            if(idx.find(p)==idx.end()){
                idx.insert({p,k});
                idx[prev] = k;
                prev = p;
            }
            k++;
        }
        idx[prev] = k-1;
        for(int i=0;i<n;i++){
            x = idx[team[i][0]];
            for(int j=x;j<n;j++){
                n1 = team[i];
                n2 = team[j];
                if(n1[0]!=n2[0]){
                    swap(n1[0],n2[0]);
                    if(name.find(n1)==name.end() && name.find(n2)==name.end()){
                        cnt+=2;
                        //cout<<n1<<" "<<n2<<endl;
                    }
                }
            }
        }
        cout<<cnt<<endl;
        team.clear();
        name.clear();
        idx.clear();
        inp.clear();
    }
}