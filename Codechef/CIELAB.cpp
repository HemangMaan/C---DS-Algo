#include<iostream>
using namespace std;

int main()
{

    int a,b,p;
    cin>>a>>b;
    p=(a-b)%10;
    if(p<=9 && p>=1)
    {
        if((a-b-1)==0)
            cout<<"3"<<endl;
        else
            cout<<a-b-1<<endl;
    }
    else
        cout<<a-b+1<<endl;

    return 0;
}
