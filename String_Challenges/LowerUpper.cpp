// Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

// Input Format
// Single Character .

// Constraints
// -

// Output Format
// lowercase UPPERCASE Invalid

// Sample Input
// $
// Sample Output
// Invalid

#include<iostream>

using namespace std;

int main(){
    char alphabet;
    cin>>alphabet;
    if(alphabet >='a'&& alphabet<='z')
        cout<<"lowercase";
    else if(alphabet >='A'&& alphabet<='Z')
        cout<<"UPPERCASE";
    else
        cout<<"Invalid";
    return 0;
}