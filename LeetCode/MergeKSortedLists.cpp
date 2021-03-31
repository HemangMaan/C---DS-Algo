#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* insert(ListNode *root,int val){
    ListNode *node = new ListNode(val,root);
    root=node;
    return root;
}

void print(ListNode *root){
    ListNode *temp = root;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    int n = lists.size();
    ListNode head;
    ListNode *tail = &head;
    int min=INT_MAX,idx=0;
    while(true){
        bool isvalid =true;
        min=INT_MAX;
        for(int i=0;i<n;i++){
            if(lists[i]!=NULL){  
                if(lists[i]->val<min){
                    min=lists[i]->val;
                    idx =i;
                }
                isvalid=false;
            }
        };
        if(isvalid){
            break;
        }
        tail->next=lists[idx];
        lists[idx]=lists[idx]->next;
        tail=tail->next;
    }
    tail->next=NULL;
    return head.next;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n,m,val;
       cin>>n;
       vector<ListNode*> lists(n,NULL);
       for(int i=0;i<n;i++){
           cin>>m;
           for(int j=0;j<m;j++){
               cin>>val;
               lists[i] = insert(lists[i],val);
           }
       }
       for(int i=0;i<n;i++){
           print(lists[i]);
           cout<<endl;
       }
       print(mergeKLists(lists));
   }
   return 0;
}
