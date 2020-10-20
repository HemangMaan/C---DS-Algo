#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,a,b,c,target;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cin>>target;
    a=0;
    b=n-1;
    c=1;
    sort(arr,arr+n);
    while(a<b){

        if((arr[a]+arr[b]+arr[c])==target){
            cout<<arr[a]<<", "<<arr[c]<<" and "<<arr[b]<<endl;
            b--;
        }
        else if((arr[a]+arr[b]+arr[c])>target){
            b--;
        }
        else if((arr[a]+arr[b]+arr[c])<target){
            c++;
        }
        if(b==c){
            ++a;
            c=a+1;
            b=n-1;
        }
    }
}