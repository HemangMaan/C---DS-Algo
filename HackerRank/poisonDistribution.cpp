#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int fact(int num){
    return (num==1||num==0)?1:num*fact(num-1);
}
int main() {
    float e=2.71828,l=2.5,k=5,result=0;
    result=(pow(l,k)*exp(-l))/fact(k);
    cout<<fact(k)<<endl<<exp(1)<<endl;
    cout<<fixed<<setprecision(3)<<result<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

