// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

// Input Format
// Enter a number N , add N more numbers

// Constraints
// None

// Output Format
// Display the Boolean result

// Sample Input
// 4
// 1
// 2
// 2
// 1
// Sample Output
// true

#include<iostream>
#include<cstring>
using namespace std;

bool IsPalindrome(char s[],int l,int r){
    if(strlen(s)==0){
        return true;
    }
    if(l==r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    if(l<r-1){
        return IsPalindrome(s,++l,--r);  
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    char s[10000];
    bool result = true;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    result = IsPalindrome(s,0,n-1);
    if(result)
        cout<<"true";
    else
        cout<<"false";
    return 0;
    
}