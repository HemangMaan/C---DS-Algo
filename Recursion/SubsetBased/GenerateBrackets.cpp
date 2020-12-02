#include<bits/stdc++.h>
using namespace std;

void GenerateBrackets(int i,int n,int oc,int cc,char *input){
    if(i==2*n){
        input[i]='\0';
        cout<<input<<endl;
        return;
    }
    if(oc<n){
        input[i]= '(';
        GenerateBrackets(i+1,n,oc+1,cc,input);
    }
    if(cc<oc){
        input[i]=')';
        GenerateBrackets(i+1,n,oc,cc+1,input);
    }
}
int main(){
    int n;
    cin>>n;
    char input[n*2+1];
    GenerateBrackets(0,n,0,0,input);
}