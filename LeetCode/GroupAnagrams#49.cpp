#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> m;
    for(auto it:strs){
        string s = it;
        sort(s.begin(),s.end());
        m[s].push_back(it);
    }
    vector<vector<string> > anagrams;
    for(auto it:m){
        anagrams.push_back(it.second);
    }
    return anagrams;
}

int main(){
    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    vector<vector<string> > result = groupAnagrams(strs);
    for(auto it: result){
        for(auto p:it){
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}