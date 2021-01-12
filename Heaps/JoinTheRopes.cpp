#include<bits/stdc++.h>
using namespace std;

int JoinTheRopes(int *arr,int n){
    priority_queue<int, vector<int>,greater<int> > pq(arr,arr+n);
    int ans=0;
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        ans += (a+b);
        pq.push((a+b));
    }
    return ans;
}

int main(){
    int arr[] = {4,3,2,6};
    int n = sizeof(arr)/sizeof(int);
    int ans = JoinTheRopes(arr,n);
    cout<<ans<<endl;
}