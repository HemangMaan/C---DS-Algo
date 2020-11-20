#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,a=0;
    cin>>t;
    vector<int> arr;
    while(t--){
        cin>>n>>k;
        vector<char> str(n);
        for(int i=0;i<n;i++){
            cin>>str[i];
            if(str[i]=='M'){
                arr.push_back(i);
            }
        }
        int p1=0,p2=0;
        for(int i=0;i<arr.size();i++){
            int s=0;
            int x=arr[i];
            while(x>=0){
                if(str[x]=='X')
                    break;
                if(str[x]==':'){
                    s++;
                }
                if(str[x]=='I'){
                    p2 = k+1-abs(x-arr[i])-s;
                    if(p1==p2){
                        a--;
                    }
                    if(p2>0 && p1!=p2 && p2>p1){
                        a++;
                    }
                }
                x--;
            }
            x=arr[i];
            s=0;
            x++;
            while(x<n){
                if(str[x]=='X' || str[x]=='M')
                    break;
                if(str[x]==':'){
                    s++;
                }
                if(str[x]=='I'){
                    p1=k+1-abs(x-arr[i])-s;
                    if(p1>0){
                        a++;
                    }
                }
                x++;
            }
        }
        cout<<a<<"\n";
    }
}