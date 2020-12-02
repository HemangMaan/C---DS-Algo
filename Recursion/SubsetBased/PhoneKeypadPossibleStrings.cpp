#include<bits/stdc++.h>
using namespace std;

char keypad[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"}; 

void PhoneKeypadStrings(char *input,char *output,int i,int j){
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    int digit = input[i]-'0';
    if(digit==0||digit ==1){
        PhoneKeypadStrings(input,output,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++){
        output[j]=keypad[digit][k];
        PhoneKeypadStrings(input,output,i+1,j+1);
    }
    return;
}

int main(){
    char input[100];
    cin>>input;
    char output[100];
    PhoneKeypadStrings(input,output,0,0);
}