#include<iostream>

using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head;
void Insert(int data, int n){
    node* temp1 = new node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=0;i<n-2;i++)
        temp2 = temp2->next;
    temp1->next=temp2->next;
    temp2->next = temp1;
}
void print(){
    node* temp = head;
    while(temp !=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Insert(5,1);
    Insert(8,2);
    print();
    return 0;
}
