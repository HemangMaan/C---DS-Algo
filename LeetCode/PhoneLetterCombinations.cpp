#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; //0-9 keys mapping
vector<string> res;
void KeypadCodes(string &inp,char *ans,int i,int j){
    if(i==inp.size()){
        ans[j]='\0';
        res.push_back(ans);
        return;
    }

    int key = inp[i]-'0';
    for(int k=0;k<keys[key].size();k++){
        ans[j]=keys[key][k];
        KeypadCodes(inp,ans,i+1,j+1);
    }
}

vector<string> letterCombinations(string digits) {
    char word[100];
    KeypadCodes(digits,word,0,0);
    return res;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       string n;
       cin>>n;
       vector<string> ans = letterCombinations(n);
       for(auto it: ans){
           cout<<it<<" ";
       }
   }
   return 0;
}