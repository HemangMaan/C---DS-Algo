#include<bits/stdc++.h>
using namespace std;

int LongestConsecutiveSubsequence(vector<int> arr){
    unordered_set<int> s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    int maxstreak = 1;
    //iterate over all the elements 
    //target those from which a streak can start
    for(int i=0;i<arr.size();i++){
        int v = arr[i];
        if(s.find(v-1)==s.end()){
            int next_no = v+1;
            int streak=1;
            while(s.find(next_no)!=s.end()){
                streak++;
                next_no++;
            }
            maxstreak = max(maxstreak,streak);
        }
    }
    return maxstreak;
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