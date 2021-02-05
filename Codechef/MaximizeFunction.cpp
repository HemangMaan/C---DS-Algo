#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int v,x=0,y=0,z=0;
        long p,res=0;
        cin>>v;
        long arr[v];
        for(int i=0;i<v;i++){
            cin>>arr[i];
        }
        sort(arr,arr+v);
        x=arr[v-1];
        y=arr[0];
        for(int i=1;i<v-1;i++){
            z=arr[i];
            p = abs(x-y)+abs(y-z)+abs(z-x);
            if(p>res){
                res=p;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}