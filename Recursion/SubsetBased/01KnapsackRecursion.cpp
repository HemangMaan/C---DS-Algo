#include<bits/stdc++.h>
using namespace std;

int Knapsack01(vector<int> wt,vector<int> prices,int n,int c){
    int inc=0,exc=0;
    if(n<0 || c==0){
        return 0;
    }
    if(c-wt[n]>=0){
        inc = prices[n] + Knapsack01(wt,prices,n-1,c-wt[n]);
    }
    exc = Knapsack01(wt,prices,n-1,c);
    return max(inc,exc);
}

int main(){
    int n,c;
    cin>>n;
    vector<int> wt(n),prices(n);
    for(int i=0;i<n;i++){
        cin>>wt[i]>>prices[i];
    }
    cin>>c;
    cout<<Knapsack01(wt,prices,n-1,c);
}