#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,p,v,prod=0;
        cin>>c;
        p = ceil(log2(c));
        //cout<<"Power: "<<p<<endl;
        v = pow(2,p);
        if(v==c){
            p++;
            v=pow(2,p);
        }
        b = pow(2,p-1)-1;
        a = b+(v-c);
        cout<<a<<" "<<b<<endl;
        long long x = a^b;
        //cout<<x<<endl;
        if(x==c)
            prod=a*b;
        cout<<prod<<endl;
    }
    return 0;
}