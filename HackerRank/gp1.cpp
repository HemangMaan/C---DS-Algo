#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float result1=0,p,q,n=5;
    p=0.33;
    q=1-p;
    result1=p*pow(q,(n-1));
    cout<<fixed<<setprecision(3)<<result1<<endl;
    return 0;
}

