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
            cout<<"x: "<<x<<" n: "<<n<<" s: "<<s;
            while(x>=0){
                cout<<"Backward "<<" x: "<<x<<endl;
                if(str[x]=='X')
                    break;
                if(str[x]==':'){
                    s++;
                }
                if(str[x]=='I'){
                    cout<<k<<" "<<x<<" "<<arr[i]<<" "<<" "<<s<<endl; 
                    p2 = k+1-abs(x-arr[i])-s;
                    cout<<"p1: "<<p1<<"p2: "<<" "<<p2<<endl;
                    if(p1==p2){
                        a--;
                        cout<<"Ans "<<a<<endl;
                    }
                    if(p2>0 && p1!=p2 && p2>p1){
                        a++;
                        cout<<"Ans "<<a<<endl;
                    }
                }
                x--;
            }
            x=arr[i];
            s=0;
            x++;
            cout<<"x: "<<x<<" n: "<<n<<" s: "<<s;
            while(x<n){
                cout<<"Forward"<<" x: "<<x<<endl;
                if(str[x]=='X' || str[x]=='M')
                    break;
                if(str[x]==':'){
                    s++;
                }
                if(str[x]=='I'){
                    p1=k+1-abs(x-arr[i])-s;
                    cout<<"p1: "<<p1<<"p2: "<<" "<<p2<<endl;
                    if(p1>0){
                        a++;
                        cout<<"Ans "<<a<<endl;
                    }
                }
                x++;
            }
        }
        cout<<a<<"\n";
    }
}