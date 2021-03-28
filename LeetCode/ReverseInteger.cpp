#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int reverse(int x) {
    int rev =0;
    while(x!=0){
        int val = x%10;
        x/=10;
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && val>7)) return 0;
        if(rev<INT_MIN/10 || (rev==INT_MIN/10 && val<-8)) return 0;
        rev = rev*10 +val;
    }
    return rev;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int ans = reverse(n);
       cout<<ans<<endl;       
   }
   return 0;
}