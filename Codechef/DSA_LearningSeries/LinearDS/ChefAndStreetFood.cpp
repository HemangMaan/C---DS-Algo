#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,res=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        res=0;
        for(int j=0;j<n;j++){
            vector<int> v(3);
            for(int k=0;k<3;k++){
                cin>>v[k];
            }
            if(((v[1]/(v[0]+1))*v[2])>res){
                res=(v[1]/(v[0]+1))*v[2];
            }
        }
        cout<<res<<"\n";
    }
}