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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode head(INT_MIN);
    ListNode *tail = &head;

    while(l1!=NULL && l2!=NULL){
        if(l1->val<l2->val){
            tail->next=l1;
            l1=l1->next;
        }    
        else{
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }
    tail->next=l1?l1:l2;
    return head.next;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       
   }
   return 0;
}