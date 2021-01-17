#include<bits/stdc++.h>
using namespace std;

int LongestConsecutiveSubsequence(vector<int> arr){
    unordered_map<int, int> m;
    int len1,len2,streak;
    for(int i=0;i<arr.size();i++){
        int v = arr[i];
        //when the element is not having streak
        if(m.count(v-1)==0 and m.count(v+1)==0){
            m[v]=1;
        }
        //when the element have lower and higher number streak.
        else if(m.count(v-1) and m.count(v+1)){
            len1 = m[v-1];
            len2 = m[v+1];
            streak = len1 + len2 + 1;
            m[v-len1]=streak;
            m[v+len2]=streak;
        }
        //when the element have lower number streak
        else if(m.count(v-1) and !m.count(v+1)){
            len1 = m[v-1];
            m[v-len1]=len1+1;
            m[v]=len1+1;
        }
        //when the element have higher number streak
        else{
            len2 = m[v+1];
            m[v+len2]=len2+1;
            m[v] = len2 + 1;
        }
    }
    int l=0;
    //Finding largest sequence length
    for(auto it:m){
        l=max(l,it.second);
    }
    return l;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int len = LongestConsecutiveSubsequence(arr);
        cout<<len<<endl;
    }
}