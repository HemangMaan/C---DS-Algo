#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    unordered_map<string, unordered_set<char> > team; 
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        string s,body;
        for(int i=0;i<n;i++){
            cin>>s;
            body = s.substr(1);
            team[body].insert(s[0]);
        }
        for(auto i = team.begin(); i != team.end(); i++){
            for(auto j = i; j != team.end(); j++){
                if(i->first!=j->first){
                    //cout<<i.first<<" "<<j.first<<endl;
                    for(auto c1:i->second){
                        if(j->second.find(c1)==j->second.end()){
                            for(auto c2:j->second){
                                if(i->second.find(c2)==i->second.end()){
                                    cnt+=2;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
        team.clear();
    }
}