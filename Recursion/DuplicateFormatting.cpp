#include<bits/stdc++.h>
using namespace std;


void RemoveDuplicates(string input,char output[],int i,int j){
    if(input[i]=='\0'){
        output[j]='\0';
        return;
    }
    if(input[i]!=input[i+1]){
        output[j]=input[i];
        RemoveDuplicates(input,output,i+1,j+1);
    }
    else
    {
        output[j]=input[i];
        output[j+1]='*';
        RemoveDuplicates(input,output,i+1,j+2);
    }
    return;
}

int main(){
    string input;
    cin>>input;
    char output[input.length()*2];
    RemoveDuplicates(input,output,0,0);
    cout<<output;
}