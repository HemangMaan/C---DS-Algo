#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,t,floor=1,p=0;
    cin>>t;
    for(int i=0;i<t;++i){
        p=0;
        floor = 1;
        cin>>n>>x;
        while(1){
            if(n<=2){
                break;
            }
            if(n>=(p*x+3)){
                floor++;p++;
            }
            if(n<=(p*x+2)){
                break;
            }
        }
        cout<<floor<<endl;
    }
}
