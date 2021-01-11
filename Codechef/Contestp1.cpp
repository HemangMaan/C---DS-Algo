#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        for(int i=0;i<2;i++){
            if(a%2==0){
                a = a/2;    
            }
            else
            {
                a=a/2+1;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}