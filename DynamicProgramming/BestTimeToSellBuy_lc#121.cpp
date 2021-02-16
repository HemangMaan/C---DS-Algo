#include<bits/stdc++.h>
using namespace std;

int StocksBuySell(vector<int>& prices){
    int profit = 0,minValue= INT_MAX;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<minValue){
            minValue=prices[i];
        }
        if(profit<prices[i]-minValue){
            profit=prices[i]-minValue;
        }
    }
    return profit;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> stocks(n);
        for(int i=0;i<n;i++){
            cin>>stocks[i];
        }
        int profit = StocksBuySell(stocks);
        cout<<profit<<endl;
    }
}