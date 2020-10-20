#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    bool res = false;
    char a,b;
    string p;
    cin>>t;
    for(int i=0;i<t;i++){
        res = false;
        cin>>n;
        if(n!=0)
            cin>>p;
        b = p[n-1];
        for(int j=0;j<n-1;j++){
            a = p[j];
            if(a==b){
                res = true;
                break;
            }
        }
        if(res){
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}