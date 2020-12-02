#include<bits/stdc++.h>
using namespace std;

//Checking From Start
// int FindLastIndex(int s,int n,int v,vector<int> arr){
//     static int ans = -1;
//     if(arr[s]==v){
//         ans = s;
//     }
//     if(s==n){
//         return ans;
//     }
//     return FindLastIndex(++s,n,v,arr);
// }

//Checking From end
int FindLastIndex(int s,int n,int v,vector<int> arr){
    if(arr[n]==v){
        return n;
    }
    if(s==n){
        return -1;
    }
    return FindLastIndex(s,--n,v,arr);
}

int main(){
    int n,v;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>v;
    cout<<FindLastIndex(0,n-1,v,arr);
}