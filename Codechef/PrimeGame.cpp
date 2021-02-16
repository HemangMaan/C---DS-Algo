#include<bits/stdc++.h>
using namespace std;

vector<bool> primes(1000005,true);
vector<int> cnt(1000001);
void primeSieve(){
    int n = 1000001;   
    primes[1]=false; 
    cnt[0]=cnt[1]=0;
    int val=0;
    for(int i=2;i<=n;i++){
        if(primes[i]){
            val++;
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }
        cnt[i]=val;
        //cout<<cnt[i]<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    primeSieve();
    int t;
    cin>>t;
    cout<<t<<endl;
    string p1="Chef",p2="Divyam";
    while(t--){
        int x=0,y=0;
        cin>>x>>y;
        if(cnt[x]<=y){
            cout<<p1<<endl;
        }
        else
        {
            cout<<p2<<endl;
        }
    }
    return 0;
}