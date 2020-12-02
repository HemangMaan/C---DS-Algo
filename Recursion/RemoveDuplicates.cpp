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
        RemoveDuplicates(input,output,i+1,j);
    }
    return;
}

int main(){
    string input;
    cin>>input;
    char output[input.length()];
    RemoveDuplicates(input,output,0,0);
    cout<<output;
}