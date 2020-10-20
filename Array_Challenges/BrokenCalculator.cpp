// Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

// Input Format
// a single lined integer N

// Constraints
// 1 < = N < = 500

// Output Format
// Print the factorial of N

// Sample Input
// 5
// Sample Output
// 120
// Explanation
// for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120

#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> vi;

void Factorial(int fact){
    vi value(100000,0);
    int q=2;
    value[0]=1;
    int len = 1,x=0,num=0;
    while(q<=fact){
        x=0;
        num=0;
        while(x<len){
            value[x]=value[x]*q;
            value[x]=value[x]+num;
            num = value[x]/10;
            value[x]=value[x]%10;
            x++;
        }
        while(num!=0)
        {
            value[len] = num%10;
            num = num/10;
            len++;
        }
        q++;
    }
    len--;
    while(len>=0)
    {
        cout<<value[len];
        len = len-1;
    }
}

int main(){
    int fact;
    cin>>fact;
    Factorial(fact);
}