#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,cnt=0;
        cin>>x>>y;
        int p=0,q=0;
        if(x-y==1){
            cnt=x+y;
        }
        else if(x==y){
            cnt=x+y;
        }
        else{
            cnt = 2*max(x,y)-1;
        }
        cout<<cnt<<"\n";
    }
}