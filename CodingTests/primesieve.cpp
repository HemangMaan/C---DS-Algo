#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

void primeSieve(int n,vector<bool> &primes){
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
       if(primes[i]){
           cout<<i<<" ";
       }
    }
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<bool> primes(n,true);
       primeSieve(n,primes);
   }
   return 0;
}