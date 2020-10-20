// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format
// N(integer) followed by N strings.

// Constraints
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman
// Sample Output
// apple
// batman
// bat
// Explanation
// In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

bool Compare(string a,string b){
    int i=0,len;
    bool s=false;
    len = min(a.length(),b.length());
    while(i<len){
        if(a[i]==b[i])
            s=true;
        else
        {
            s=false;
            break;
        }
        i++;
    }
    if(s)
        return a>b;
    else
    {
        return a<b;
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;++i){
        cin>>str[i];
    }
    sort(str.begin(),str.end(),Compare);
    for(auto it:str)
        cout<<it<<endl;
    return 0;
}