#include<iostream>
using namespace std;
int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? n: n * factorial(n - 1);
}

// Driver Code
int main()
{
    int num;
    cin>>num;
    printf ("Factorial of %d is %d", num, factorial(num));
    return 0;
}
