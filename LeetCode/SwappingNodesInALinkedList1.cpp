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

ListNode* swapNodes(ListNode* head, int k){
    vector<int> li;
    int x;
    ListNode *p=head,*f=head;
    while(p!=NULL){
        x=p->data;
        li.push_back(x);
        p=p->next;
    }
    int size = li.size();
    // if(k>size/2){
    //     return head;
    // }
    int temp=li[k-1];
    li[k-1]=li[size-k];
    li[size-k]=temp;
    for(int i=0;i<size;i++){
        f->data=li[i];
        f=f->next;
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