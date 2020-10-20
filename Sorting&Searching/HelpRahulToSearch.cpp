#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int SearchBinary(vector<int> arr,int s,int e,int key){
    int ans = -1;
        int mid;
        while(s<=e){
            mid=(s+e)/2;
            if(key==arr[mid]){
                ans=mid;
                break;
            }
            else if(arr[s]<=arr[mid]){
                if(key>=arr[s] && key<arr[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else
            {
                if(key<=arr[e] && key>=arr[mid]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }

    return ans;
}

int main(){
    int n,v,key,s,e;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>v;
        arr.push_back(v);
    }
    cin>>key;
    s= 0;
    e = arr.size();
    cout<<SearchBinary(arr,s,e,key);
}