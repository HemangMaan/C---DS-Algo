#include<bits/stdc++.h>
using namespace std;

struct ListNode {
   int data;
   struct ListNode *next;
};
struct ListNode* head = NULL;
void insert(int new_data) {
   struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct ListNode* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
ListNode* swapNodes(ListNode* head, int k) {
    ListNode* loc1= (struct ListNode*) malloc(sizeof(struct ListNode));
    ListNode *p1 = head,*p2=head;
    int cnt1=1,cnt2=1,l=1,temp;
    if(head->next==NULL){
        return head;
    }
    if(cnt1==k){
        loc1 = p1;
        // cout<<"loc1 "<<loc1->data<<endl;
    }
    while(p1!=NULL){
        p1=p1->next;
        cnt1++;
        // cout<<"p1 "<<p1->data<<" cnt1 "<<cnt1<<endl;
        if(p2->next->next!=NULL){
            p2=p2->next->next;
            cnt2+=2;
            // cout<<"p2 "<<p2->data<<" cnt2 "<<cnt2<<endl;
        }
        else if(p2->next!=NULL){
            p2=p2->next;
            cnt2++;
        }
        if(p2->next==NULL){
            l=abs(cnt2-(k-1));
            while(cnt1!=l){
                p1=p1->next;
                cnt1++;
            }
        }
        if(cnt1==k){
            loc1 = p1;
            // cout<<"loc1 "<<loc1->data<<endl;
        }
        if(cnt1==l){
            // cout<<"Condition Matched"<<endl;
            temp=p1->data;
            p1->data=loc1->data;
            loc1->data=temp;
            break;
        }
        // cout<<"------------------"<<endl;
    }
    return head;
}

int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        insert(x);
    }
    int k;
    cin>>k;
    display();
    cout<<endl;
    swapNodes(head,k);
    display();
}