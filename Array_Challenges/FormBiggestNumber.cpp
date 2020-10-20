// You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

// Input Format
// First line contains integer t which is number of test case.
// For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

// Constraints
// 1<=t<=100
// 1<=m<=100
// 1<=A[i]<=10^5

// Output Format
// Print the largest value.

// Sample Input
// 1
// 4
// 54 546 548 60
// Sample Output
// 6054854654
// Explanation
// Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a,string b){
    string f = a.append(b);
    string s = b.append(a);
    return f.compare(s)>0 ? 1:0;
}

int main(){
    string arr[100];
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n;
        cin>>n;
        for(int j=0;j<n;++j){
            cin>>arr[j];
        }
        sort(arr,arr+n,compare);
        for(int j=0;j<n;++j){
            cout<<arr[j];
        }
        cout<<endl;
    }
    
}
