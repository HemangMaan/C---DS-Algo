#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[1000],n,i,j,target;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cin>>target;
    i=0;
    j=n-1;
    sort(arr,arr+n);
    while(i<j){

        if((arr[i]+arr[j])==target){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;j--;
        }
        else if((arr[i]+arr[j])>target){
            j--;
        }
        else if((arr[i]+arr[j])<target)
        {
            i++;
        }
    }
}