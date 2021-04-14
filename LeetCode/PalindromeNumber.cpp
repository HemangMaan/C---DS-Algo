#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

bool isPalindrome(int x) {
    int chk=0;
    if(x<0 ||(x%10==0 && x!=0)){
        return false;
    }
    if(x>=0 && x<9){
        return true;
    }
    while(chk<x){
        chk=(chk*10)+(x%10);
        if(chk==x){
            return true;
        }
        x/=10;
        if(chk==x){
            return true;
        }
    }
    return false;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       if(isPalindrome(n)){
           cout<<"true"<<endl;
       }
       else{
           cout<<"false"<<endl;
       }
   }
   return 0;
}