#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int maxArea(vector<int>& height) {
    int s=0,e=height.size()-1,Amax=0,Cmax=0;
    while(s<e){
        Cmax = min(height[s],height[e])*(e-s);
        if(Cmax>Amax){
            Amax = Cmax;
        }
        if(height[s]<height[e]){
            s++;
        }
        else if(height[s]>height[e]){
            e--;
        }
        else{
            s++;
            e--;
        }
    }
    return Amax;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int> height(n);
       for(int i=0;i<n;i++){
           cin>>height[i];
       }
       int ans = maxArea(height);
       cout<<ans<<endl;
   }
   return 0;
}