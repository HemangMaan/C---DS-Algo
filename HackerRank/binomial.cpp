#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    return (n==1||n==0)?1:n*fact(n-1);
}
int comb(int r){
    return (fact(10)/(fact(r)*fact(10-r)));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float result1=0,result2=0,p,q,n=10,r;
    p=0.12;
    q=1-p;
    for(r=2;r>=0;r--){
        result1+=comb(r)*pow(p,r)*pow(q,(n-r));
    }
    for(r=10;r>=2;r--){
        result2+=comb(r)*pow(p,r)*pow(q,(n-r));
    }
    cout<<fixed<<setprecision(3)<<result1<<endl;
    cout<<fixed<<setprecision(3)<<result2<<endl;
    return 0;
}
