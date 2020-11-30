#include<bits/stdc++.h>
using namespace std;

void Permutations(string s,int curr,int k,set<string> &ans){
    if(s[curr]=='\0'){
        ans.insert(s);
        return;
    }
    for(int i=curr;i<k;i++){
        swap(s[i],s[curr]);
        Permutations(s,curr+1,k,ans);
        swap(s[i],s[curr]);
    }

}

int main(){
    string s;
    set<string> ans;
    cin>>s;
    Permutations(s,0,s.size(),ans);
    for(auto str:ans){
        cout<<str<<endl;
    }
}