#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n>>k>>x>>y;
        int p = k%4;
        if(p==0){
            p=4;
        }
        if(x==y){
            cout<<n<<" "<<n<<endl;
            continue;
        }
        if(y>x){
            for(int i=1;i<=p;i++){
                if(i==4 || i==2){
                    swap(x,y);
                }
                if(i==1){
                    x=x+(n-y);
                    y=n;
                }
                if(i==3){
                    x=x-y;
                    y=0;
                }
            }
        }
        else if(x>y){
            for(int i=1;i<=p;i++){
                if(i==4 || i==2){
                    swap(x,y);
                }
                if(i==1){
                    y=y+(n-x);
                    x=n;
                }
                if(i==3){
                    y=y-x;
                    x=0;
                }
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}