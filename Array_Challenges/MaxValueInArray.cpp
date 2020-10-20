#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
	int n,result=INT_MIN;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;++i){
		result = max(result,arr[i]);
	}
	cout<<result;
	return 0;
}