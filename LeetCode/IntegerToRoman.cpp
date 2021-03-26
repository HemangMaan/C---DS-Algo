#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

string intToRoman(int num) {
    string romans[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string sans;
    for(int i=0;num!=0;i++){
        while(num>=values[i]){
            num-=values[i];
            sans+=romans[i];
        }
    }
    return sans;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string ans = intToRoman(n);
       cout<<ans<<endl;   
   }
   return 0;
}