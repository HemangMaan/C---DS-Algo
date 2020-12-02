#include<bits/stdc++.h>
using namespace std;

char alphabet[27];

void StringGeneration(char *input,char *output,int i,int j){
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    int digit = input[i]-'0';
    output[j]= alphabet[digit];
    StringGeneration(input,output,i+1,j+1);
    if(input[i+1]!='\0' && digit*10+input[i+1]-'0'<27){
        output[j]= alphabet[digit*10+input[i+1]-'0'];
        StringGeneration(input,output,i+2,j+1);
    }
}
int main(){
    for(int i=1;i<27;i++){
        alphabet[i] = i + 64;
    }
    char input[100];
    cin>>input;
    char output[100];
    StringGeneration(input,output,0,0);
}