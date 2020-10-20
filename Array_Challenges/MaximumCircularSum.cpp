// You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

// Input Format
// First line contains integer t which is number of test case.
// For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

// Constraints
// 1<=t<=100
// 1<=n<=1000
// |Ai| <= 10000

// Output Format
// Print the maximum circular sum for each testcase in a new line.

// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
// Explanation
// Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Kadane(vector<int> &arr){
    int curSum=0,maxSum=0;
    for(int i=0;i<arr.size();++i){
        curSum+=arr[i];
        if(curSum<0)
            curSum=0;
        if(curSum>maxSum)
            maxSum = curSum;
    }
    return maxSum;
}
int MaxCircularSum(vector<int> &sum){
    int n,maxSum=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    int kadaneSum = Kadane(arr);
    int wrapSum=0;
    for(int i=0;i<n;++i){
        wrapSum= wrapSum + arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = wrapSum + Kadane(arr);
    if(wrapSum>kadaneSum)
        return wrapSum;
    return kadaneSum;
}

int main(){
    int t;
    cin>>t;
    vector<int> sum(t);
    for(int i=0;i<t;++i){
        sum[i] = MaxCircularSum(sum);
    }
    for(int i=0;i<sum.size();++i){
        cout<<sum[i]<<endl;
    }
    return 0;
}