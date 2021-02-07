#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,n,q,x,y,z,index,seq,lastans=0;
    cin>>n>>q;
    vector <vector<int>> s(n,vector <int> ());
    for(i=0;i<q;++i){
        cin>>z>>x>>y;
        if(z==1){
            seq=((x^lastans)%n);
            s[seq].push_back(y);
        }
        if(z==2){

            vector <int> p;
            seq=((x^lastans)%n);
            index= y%s[seq].size();
            lastans=s[seq][index];
            cout<<lastans<<endl;
        }
    }
    return 0;
}

