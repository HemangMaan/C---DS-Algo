#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,total=0;
    cin>>t;
    for(int i=0;i<t;++i){
        total=0;
        int act;
        cin>>act;
        string origin;
        cin>>origin;
        for(int j=0;j<act;++j){
            string a;
            cin>>a;
            if(a=="CONTEST_WON"){
                total += 300;
                int cw;
                cin>>cw;
                if(cw<20)
                    total+=(20-cw);
            }
            else if(a=="TOP_CONTRIBUTOR")
                total+=300;
            else if(a=="BUG_FOUND"){
                int sev;
                cin>>sev;
                total+=sev;
            }
            else if(a=="CONTEST_HOSTED")
                total+=50;
        }
        cout<<(origin=="INDIAN"? total/200:total/400)<<"\n";
    }
    return 0;
}