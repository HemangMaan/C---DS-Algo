#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}*head;

void ListInsert(int n){
    if(head==NULL){
        head = new ListNode(n);
    }
    else{
        ListNode* temp = new ListNode(n,head);
        head = temp;
    }
}

ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || k==0) return head;
    ListNode *l2 = head;
    int cnt = 1;
    while(l2->next!=NULL){
        l2 = l2->next;
        cnt++;
    }
    l2->next = head;
    k = cnt - k%cnt;
    while(k--) l2 = l2->next;
    head = l2->next;
    l2->next = nullptr;
    return head;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i>0;i--){
            ListInsert(i);
        }
        int k;
        cin>>k;
        ListNode* ite = rotateRight(head,k);
        while(ite!=NULL){
            cout<<ite->val<<" ";
            ite = ite->next;
        }
    }
    return 0;
}