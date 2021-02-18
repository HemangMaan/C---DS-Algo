#include <cmath>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double v,temp=0,sum=0;
    int n,i,mode,c,co=0;
    float mean,media;
    vector<float> arr;
    cin>>n;
    for(i=0;i<n;++i)
    {
         cin>>v;
         arr.push_back(v);
    }
    sort(arr.begin(), arr.end());
    for(i=0;i<n;++i)
    {
        sum=sum+arr[i];
        if(arr[i]!=temp)
        {
            c=count(arr.begin(), arr.end(), arr[i]);
            if(c>co)
                temp=arr[i];
                co=c;
        }
    }
    mean = sum/n;
    int mid=n/2;
    if(n%2==0)
        media = (arr[mid-1]+arr[mid])/2;
    else
        media = arr[mid-1];
    mode = temp;
    printf("%.1f \n", mean);
    printf("%.1f \n",media);
    cout<<mode;
    return 0;
}
