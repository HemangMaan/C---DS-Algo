#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &v){
    int i,j;
    for(int i=1;i<v.size();++i){
        int val = v[i];
        j=i-1;
        while(j>=0 && v[j]>val){
            v[j+1] = v[j];
            j--;
        }
        v[j+1]= val;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    InsertionSort(v);
    for(auto it:v){
        cout<<it<<" ";
    }
}