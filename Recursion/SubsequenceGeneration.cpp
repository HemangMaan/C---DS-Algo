#include<bits/stdc++.h>
using namespace std;

void SubsequenceGeneration(char *input,char *output,int i,int j){
    if(input[i]=='\0'){
        output[j] = '\0';
        cout<<output<<" ";
        return;
    }

    //include current char
    output[j]=input[i];
    SubsequenceGeneration(input,output,i+1,j+1);

    //exclude current char
    SubsequenceGeneration(input,output,i+1,j);
}

int main(){
    char input[] = "abc";
    char output[10];
    SubsequenceGeneration(input,output,0,0);
}