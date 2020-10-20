#include<iostream>
#include<vector>
using namespace std;

int main(){

    int tc,n,val,curSum=0,maxSum=0;;
    vector<int> arr,result;
    cin>>tc;
    for(int i=0;i<tc;++i){
        cin>>n;
        curSum=0;
        maxSum=0;
        arr.clear();
        for(int j=0;j<n;++j){
        cin>>val;
        arr.push_back(val);
        }

        for(int j=0;j<n;++j){
            curSum+=arr[j];
            if(curSum<0)
                curSum=0;
            if(curSum>maxSum)
                maxSum = curSum;
        }
        result.push_back(maxSum);
    }
    for(int j=0;j<result.size();++j){
        cout<<result[j]<<endl;
    }
    return 0;
}