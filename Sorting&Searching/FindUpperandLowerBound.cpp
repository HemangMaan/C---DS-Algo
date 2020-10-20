#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int t,v;
    
    cin>>t;
    while(t--){
        cin>>v;
        auto present = binary_search(arr.begin(),arr.end(),v);
        if(present){
            vector <int>::iterator lower,upper;
            lower = lower_bound(arr.begin(),arr.end(),v);
            upper = upper_bound(arr.begin(),arr.end(),v);
            cout<<(lower-arr.begin())<<" "<<(upper-arr.begin()-1)<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;;
        }
    }
}