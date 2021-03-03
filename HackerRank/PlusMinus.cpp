#include <bits/stdc++.h>
#include<iomanip>
using namespace std;


// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    double pos,neg,zero;
    int i;
    for(i=0;i<arr.size();++i)
    {
        if(arr[i]>0 && arr[i]!=0)
        {
            pos++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]<0 && arr[i]!=0)
        {
            neg++;
        }
    }
    pos = pos/arr.size();
    neg = neg/arr.size();
    zero = zero/arr.size();
    cout<<std::setprecision(6)<<pos<<endl;
    cout<<std::setprecision(6)<<neg<<endl;
    cout<<std::setprecision(6)<<zero<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    plusMinus(arr);

    return 0;
}
