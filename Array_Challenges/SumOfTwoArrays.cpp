// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

// Input Format
// Constraints
// Length of Array should be between 1 and 1000.

// Output Format
// Sample Input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7
// Sample Output
// 3, 5, 5, 9, 6, END
// Explanation
// Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<int> vi;

int main(){
    int v1,v2;
    cin>>v1;
    vi sum1(v1);
    for(int i=0;i<v1;++i)
        cin>>sum1[i];
    cin>>v2;
    vi sum2(v2);
    for(int i=0;i<v2;++i)
        cin>>sum2[i];
    int anslen = max(v1,v2)+1;
    vi ans(anslen);
    int rem=0;
    int count=0;
    v1--;v2--;anslen--;
    while(anslen>=0){
        ans[anslen] = ans[anslen] +rem;
        if(v1>=0 && v2>=0){
            rem = (sum1[v1]+sum2[v2])/10;
            ans[anslen] = ans[anslen] + (sum1[v1]+sum2[v2])%10;
        }
        else if(v1>=0 && v2<0){
            rem =0;
            ans[anslen] = ans[anslen] + sum1[v1];
        }
        else if(v2>=0 && v1<0){
            rem =0;
            ans[anslen] = ans[anslen] + sum2[v2];
        }
        else if(rem==0){
            ++count;
        }
        anslen--;v1--;v2--;
    }
    for(int i=count;i<ans.size();++i)
        cout<<ans[i]<<", ";
    cout<<"END";
}