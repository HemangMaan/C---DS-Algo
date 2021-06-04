#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int s = heights.size();
    int h,ans =0;
    int left[s],right[s];
    st.push(0);
    left[0]=0;right[s-1]=s-1;
    for(int i=1;i<s;i++){
        while(!st.empty() && heights[i]<=heights[st.top()]){
            st.pop();
        }
        if(!st.empty())
            left[i]= st.top()+1;
        else{
            left[i]=0;
        }
        st.push(i);
    }
    cout<<"Left:  ";
    for(int i=0;i<s;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;
    while(!st.empty())
        st.pop();
    st.push(s-1);
    for(int i=s-2;i>=0;i--){
        while(!st.empty() && heights[i]<=heights[st.top()]){
            st.pop();
        }
        if(!st.empty())
            right[i]= st.top()-1;
        else{
            right[i]=s-1;
        }
        st.push(i);
    }
    cout<<"Right: ";
    for(int i=0;i<s;i++){
        cout<<right[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        h = (right[i]-left[i]+1)*heights[i];
        ans = max(ans,h);
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int h;
        cin>>h;
        vector<int> heights(h);
        for(int i=0;i<h;i++){
            cin>>heights[i];
        }
        int ans = largestRectangleArea(heights);
        cout<<ans;
    }
    return 0;
}