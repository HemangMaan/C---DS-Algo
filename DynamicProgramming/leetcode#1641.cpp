// Given an integer n, return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are 
// lexicographically sorted.

// A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.

// Input: n = 2
// Output: 15
// Explanation: The 15 sorted strings that consist of vowels only are
// ["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].
// Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.

#include<bits/stdc++.h>
using namespace std;

int TotalCount(int n,int i,string s,vector<char> &c){
    int cnt=0;
    if(i==n){
        return 1;
    }
    for(int j=0;j<s.size();j++){
        c[i]=s[j];
        if(i==0 || c[i-1]<=c[i])
        cnt+=TotalCount(n,i+1,s,c);
    }
    return cnt;
}

int countVowelStrings(int n) {
    string s = "aeiou";
    vector<char> c(n);
    return TotalCount(n,0,s,c);
}

int main(){
    int n;
    cin>>n;
    int res = countVowelStrings(n);
    cout<<res<<endl;
    return 0;
}