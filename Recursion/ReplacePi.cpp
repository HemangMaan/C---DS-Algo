#include<bits/stdc++.h>
using namespace std;

void Replacepi(char inp[],int i){
    if(inp[i]=='\0' or inp[i+1]=='\0'){
        return;
    }
    if(inp[i]=='p'&&inp[i+1]=='i'){
        int j=i+2;
        while(inp[j]!='\0')
        {   
            j++;
        }
        for(int k = j+2;k>i+2;k--){
            inp[k]=inp[j];
            j--;
        }
        j=i;
        inp[j]='3';
        inp[j+1]='.';
        inp[j+2]='1';
        inp[j+3]='4';
    }
    Replacepi(inp,i+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        char inp[2005];
        cin>>inp;
        Replacepi(inp,0);
        cout<<inp<<endl;
    }
}