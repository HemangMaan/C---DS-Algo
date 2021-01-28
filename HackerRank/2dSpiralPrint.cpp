#include<iostream>

using namespace std;

int main(){

    int n,m,i,j,l,x,k,arr[1000][1000];
    cin>>n;
    cin>>m;
    for(i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;++i){
        if(i>0){
            for(l=j;l>=i-1;--l)
                cout<<arr[k][l];
            for(x=k;x>=i;x--)
                cout<<arr[x][l];
        }
        for(j=0;j<m-i;++j)
            cout<<arr[i][j]<<" ";
        cout<<endl;
        for(k=i+1;k<n-i;k++)
            cout<<arr[k][j]<<" ";
    }

    return 0;
}
