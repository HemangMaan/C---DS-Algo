#include<bits/stdc++.h>
using namespace std;


void HeapFormArray(vector<int> &v){

    for(int i=2;i<v.size();i++){
        int idx = i;
        int parent = idx/2;
        while(idx>1 && v[idx]>v[parent]){
            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }
}

int main(){
    vector<int> v = {-1,10,20,5,6,1,8,9,4};
    HeapFormArray(v);
    for(auto it:v){
        cout<<it<<" ";
    }
}