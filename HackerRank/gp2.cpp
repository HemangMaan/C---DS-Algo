#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float result1=0,p,q,n=1;
    p=0.33;
    q=1-p;
    for(n=4;n>=0;n--)
        result1+=pow(q,n)*p;
    cout<<fixed<<setprecision(3)<<result1<<endl;
    return 0;
}

