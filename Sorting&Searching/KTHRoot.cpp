// You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

// Input Format
// First line contains number of test cases, T. Next T lines contains integers, n and k.

// Constraints
// 1<=T<=10
// 1<=N<=10^15
// 1<=K<=10^4

// Output Format
// Output the integer x

// Sample Input
// 2
// 10000 1
// 1000000000000000 10
// Sample Output
// 10000
// 31
// Explanation
// For the first test case, for x=10000, 10000^1=10000=n

#include<iostream>
#include<cmath>

typedef unsigned long long ll;
using namespace std;

ll FindKth(ll s,ll e,ll n,ll k){
    if(s<=e){
        ll mid = s+(e-s)/2;
        if(pow(mid,k)>n)
        {
           return FindKth(s,mid-1,n,k);
        }
        else{
            return FindKth(mid+1,e,n,k);
        }
    }
    return s-1;
}

int main(){
    int t;
    cin>>t;
    ll n,k;
    for(int i=0;i<t;++i){
        cin>>n>>k;
        int e = n;
        ll res = FindKth(0,e,n,k);
        cout<<endl;
        cout<<res<<endl;
    }
}