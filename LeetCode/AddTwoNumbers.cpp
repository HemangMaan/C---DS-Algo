#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(){
            next=NULL;
        } 
        ListNode(int x){
            val = x;
            next = NULL;
        }
};

ListNode* insert(ListNode* l, int x){
        ListNode* ptr = new ListNode(x);
        ptr->next = l;
        l = ptr;
        return l;
}
void print(ListNode* l){
    ListNode* tmp = l;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum=0;
    ListNode *res = NULL,**temp=&res;
    while(l1!=NULL || l2!=NULL || sum>0){
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2 = l2->next;
        }
        *temp = new ListNode(sum%10);
        temp = &(*temp)->next;
        sum/=10;
    }
    return res;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       ListNode* l1 = NULL;
       ListNode* l2 = NULL;
       int n,v;
       cin>>n;
       for(int i=0;i<n;i++){
           cin>>v;
           l1 = insert(l1,v);
       }
       for(int i=0;i<n;i++){
           cin>>v;
           l2 = insert(l2,v);
       }
    //    print(l1);
    //    cout<<endl;
    //    print(l2);
    //    cout<<endl;
       ListNode *ans = addTwoNumbers(l1,l2);
       print(ans);
   }
   return 0;
}