// Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

// Input Format
// String

// Constraints
// A string of length between 1 to 1000.

// Output Format
// Character

// Sample Input
// aaabacb
// Sample Output
// a
// Explanation
// For the given input string, a appear 4 times. Hence, it is the most frequent character.

#include<iostream>
#include<string>
#define ASCII_Size 256
using namespace std;

int main(){
    string s;
    int max=0,count[ASCII_Size] = {0};
    char result;
    cin>>s;
    int len = s.length();
    for(int i=0;i<len;++i){
        count[s[i]]++;
        if(max<count[s[i]]){
            max = count[s[i]];
            result = s[i];
        }
    }
    cout<<result;
	return 0;
}