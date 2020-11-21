#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
        if(v[i]==1)
            cout<<"0\n";
        else if(v[i]==2){
            cout<<"1\n";
        }
        else if(v[i]==3){
            cout<<"2\n";
        }
        else if(v[i]%2==0){
            cout<<"2\n";
        }
        else
        {
            cout<<"3\n";
        }
    }
}