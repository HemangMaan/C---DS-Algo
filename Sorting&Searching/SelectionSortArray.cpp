#include<iostream>
#include<climits>
#include<vector>
using namespace std;


void SelectionSort(vector<int> &arr){
    int i,j,index;
    int min = INT_MAX;
    for(int i=0;i<arr.size();++i){
        for(int j=i;j<arr.size();++j){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        swap(arr[i],arr[index]);
        min = INT_MAX;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    SelectionSort(arr);
    for(auto it:arr)
        cout<<it<<endl;

}