// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

// Input Format
// A single String S

// Constraints
// 1 < = length of String < = 1000

// Output Format
// The compressed String.

// Sample Input
// aaabbccds
// Sample Output
// a3b2c2d1s1
// Explanation
// In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string s,s2,p;
    cin>>s;
    int count = 1;
    //sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            ++count;
        }
        else{
            p = s[i];
            s2.append(p);
            s2.append(to_string(count));
            count = 1;
        }
    }
    cout<<s2;
    return 0;
}