#include<bits/stdc++.h>
using namespace std;

int mininumTotal(vector<vector<int> >& triangle){
    int n = triangle.size();
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<triangle[i].size();j++){
            triangle[i][j]=min(triangle[i+1][j],triangle[i+1][j+1])+triangle[i][j];
        }
    }
    return triangle[0][0];
}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > triangle(n);
    vector<int> inp;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int val;
            cin>>val;
            inp.push_back(val);
        }
        triangle[i] = inp;
        inp.clear();
    }
    int result = mininumTotal(triangle);
    cout<<result<<endl;
}