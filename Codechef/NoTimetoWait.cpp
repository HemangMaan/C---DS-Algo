#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h,x,t;
    cin>>n>>h>>x;
    for(int i=0;i<n;i++){
        cin>>t;
        if(x+t>=h){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}