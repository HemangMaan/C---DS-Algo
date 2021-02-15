#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int s,strt=0;
        cin>>s;
        vector<string> cmd(s);
        for(int i=0;i<s;i++){
            cin>>cmd[i];
        }
        for(int i=0;i<s;i++){
            if(cmd[i]=="start"){
                strt=1;
            }
            else if(cmd[i]=="restart" && strt==0){
                strt=1;
            }
            else if(cmd[i]=="stop"){
                strt--;
            }
            if(strt<0){
                break;
            }
        }   
        if(strt<0){
            cout<<"404"<<endl;
        }
        else{
            cout<<"200"<<endl;
        }
    }
    return 0;
}