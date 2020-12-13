#include<bits/stdc++.h>
using namespace std;

void Replacepi(char inp[],int i){
    if(inp[i]=='\0'){
        cout<<inp;
        return;
    }
    if(inp[i]=='p' && inp[i+1]=='i'){
        int j=i;
        while(inp[j]!='\0'){
            j++;
        }
        for(int k =j+2;k>i+2;--k){
            inp[k]=inp[j];
        }
        inp[i]='3';
        inp[i+1]='.';
        inp[i+2]='1';
        inp[i+3]='4';
        Replacepi(inp,i+4);
    }
    else
    {
        Replacepi(inp,i+1);
    } 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        char inp[1000];
        cin>>inp;
        Replacepi(inp,0);
    }
}