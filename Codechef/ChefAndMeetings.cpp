#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char time[6],ampm[6],t2[6],ampm2[6],t3[6],ampm3[6];
        int hr=0,m=0;
        cin>>time>>ampm;
            hr = hr + time[0]-'0';
            hr = hr*10;
            hr = hr + time[1]-'0';
            m = m + time[3]-'0';
            m=m*10;
            m = m + time[4]-'0';
        if(strcmp(ampm,"PM")==0 && hr!=12){
            hr=12+hr;
        }
        if(strcmp(ampm,"AM")==0 && hr==12){
            hr=12-hr;
        }
        cout<<hr<<":"<<m<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int hr2=0,m2=0,hr3=0,m3=0;
            cin>>t2>>ampm2;
            hr2 = hr2 + t2[0]-'0';
            hr2 = hr2*10;
            hr2 = hr2 + t2[1]-'0';
            m2 = m2 + t2[3]-'0';
            m2=m2*10;
            m2 = m2 + t2[4]-'0';
            if(strcmp(ampm2,"PM")==0 && hr2!=12){
                hr2=12+hr2;
            }
            if(strcmp(ampm2,"AM")==0 && hr2==12){
            hr2=12-hr2;
            }
            cout<<hr2<<":"<<m2<<endl;
            cin>>t3>>ampm3;
            hr3 = hr3 + t3[0]-'0';
            hr3 = hr3*10;
            hr3 = hr3 + t3[1]-'0';
            m3 = m3 + t3[3]-'0';
            m3=m3*10;
            m3 = m3 + t3[4]-'0';
            if(strcmp(ampm3,"PM")==0 && hr3!=12){
                hr3=12+hr3;
            }
            if(strcmp(ampm3,"AM")==0 && hr3==12){
            hr3=12-hr3;
            }
            cout<<hr3<<":"<<m3<<endl;
            if(hr2<hr && hr3>hr){
                cout<<"1"<<endl;
            }
            else if(hr==hr2 && hr==hr3){
                if(m>=m2 && m<=m3){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"0"<<endl;
                }
            }
            else if (hr2==hr && hr3>hr){
                if(m2<=m){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"0"<<endl;
                }
            }
            else if (hr3==hr && hr2<hr){
                if(m3>=m){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"0"<<endl;
                }
            }
            else if (hr3<hr2 && hr<hr2){
                cout<<"1"<<endl;
            }
            else if(hr3<hr2 && hr<hr2){
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        cout<<endl;
    }
}