#include<bits/stdc++.h>
using namespace std;

class Heap{
    vector<int> v;
    bool HeapType; //min heap if true max heap if false

    //compare acc. to the type of heap
    bool compare(int a,int b){
        if(HeapType){
            return a<b;
        }
        else
        {
            return a>b;
        }
    }
public:
    Heap(int default_size = 10,bool Type = true){
        v.reserve(default_size);
        v.push_back(-1);
        HeapType = Type;
    }
    //pushing the value of heap
    void push(int d){
        v.push_back(d);
        int idx = v.size()-1;
        int parent = idx/2;
        while(idx>1 && compare(v[idx],v[parent])){
            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }
    int top(){
        return v[1];
    }
};

int main(){
    Heap h;
    h.push(5);
    h.push(10);
    h.push(1);
    h.push(11);
}