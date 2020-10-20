// In his contest he gave the contestants many different pairs of numbers. Each number is made from digits 0 or 1. The contestants should write a new number corresponding to the given pair of numbers. The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ. In the other case the i-th digit of the answer is 0.

// Prateek made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length ∞ (length of a number is number of digits in it) in a glance! He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person numbers of same length.

// Now you are going to take part in Shapur's contest. See if you are faster and more accurate.

// Input Format
// The first line contains an integer t , the no. of testcases. There are two inputs in each line. Each of them contains a single number. It is guaranteed that the numbers are made from 0 and 1 only and that their length is same. The numbers may start with 0.

// Constraints
// The length of each number doesn't exceed 100.

// Output Format
// Write t lines — the corresponding answer to the corresponding input. Do not omit the leading 0s.

// Sample Input
// 1
// 10111 10000
// Sample Output
// 00111
// Explanation
// For the given example, Let str1 = "10111" and str2 = "10000", Value at first position of str1 is 1 and first position str2 is 1, hence according to the rule there will be 0 at the first position of the final ans.Similarly, for second position the value at second position of both of the strings is 0,so , there will be 0 at the second position of the final ans.Similarly, for third position the value at third position of str1 is 1 and str2 is 0,so , there will be 1 at the third position of the final ans and So, on.

#include<iostream>
#include<string>

using namespace std;
int main(){

    string str1,str2,fstr[100],ans;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>str1>>str2;
        for(int j=0;j<str1.size();++j){
            if(str1[j]!=str2[j]){
                if(str1[j]>str2[j]){
                    ans= str1[j];
                }
                else
                {
                    ans = str2[j];
                }
                fstr[i].append(ans);
            }
            else
            {
                ans = '0';
                fstr[i].append(ans);
            }
        }
    }
    for(int i=0;i<t;++i)
        cout<<fstr[i]<<endl;
    return 0;
}