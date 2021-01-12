#include<bits/stdc++.h>
using namespace std;

void MedianOfRunningStream(int k){
    priority_queue<int , vector<int>,  greater<int> > Hmin;
    priority_queue<int , vector<int> > Hmax;
    int r;
    float median;
    cin>>r;
    Hmax.push(r);
    median = r;
    cout<<median<<" ";
    k--;
    while(k--){
        cin>>r;
        if(Hmax.size()>Hmin.size()){
            if(r<median){
                Hmin.push(Hmax.top());
                Hmax.pop();
                Hmax.push(r);
            }
            else
            {
                Hmin.push(r);
            }
            median = (Hmax.top()+Hmin.top())/2.0;
        }
        else if(Hmax.size()==Hmin.size()){
            if(r<median){
                Hmax.push(r);
                median = Hmax.top();
            }
            else
            {
                Hmin.push(r);
                median = Hmin.top();
            }
        }
        else
        {
            if(r>median){
                Hmax.push(Hmin.top());
                Hmin.pop();
                Hmin.push(r);
            }
            else
            {
                Hmax.push(r);
            }
            median = (Hmax.top()+Hmin.top())/2.0;
        }
        cout<<median<<" ";
    }
    return;
}

int main(){
    int k,t;
    cin>>t;
    while(t--){
        cin>>k;
        MedianOfRunningStream(k);
    }
    return 0;
}