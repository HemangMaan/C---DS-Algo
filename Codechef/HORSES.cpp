#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int j,t,n,v,diff;
    vector <int> s;
    cin>>t;
    while(t--){
        cin>>n;
        diff=1000000000;
        s.clear();
        for(j=0;j<n;++j){
            cin>>v;
            s.push_back(v);
        }
        sort(s.begin(),s.end());
        for(j=0;j<n-1;++j)
        {
            if(diff>(s[j+1]-s[j]))
                diff=s[j+1]-s[j];
        }
        cout<<diff<<endl;
    }
    return 0;
}
