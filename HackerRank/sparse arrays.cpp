#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> CompareFunction(vector <string> a, vector <string> b){
    int i,j;
    vector <int> result(b.size(),0);
    for(i=0;i<b.size();++i){
        for(j=0;j<a.size();++j){
            int x = b[i].compare(a[j]);
            if(x==0)
                result[i]++;
        }
    }
    return result;
}
int main(){

    vector <string> a,b;
    int i,j,n,q;
    string temp;
    cin>>n;
    for(i=0;i<n;++i){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>q;
    for(j=0;j<q;++j){
        cin>>temp;
        b.push_back(temp);
    }
    vector <int> result = CompareFunction(a,b);
    for(i=0;i<result.size();++i){
        cout<<result[i]<<endl;
    }
    return 0;
}
