#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};
node *head;
void Insert(int x){
    node *temp = new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
         head=temp;
    else{
    node* temp1 = new node();
    temp1=head;
    while(temp1->next!=NULL)
        temp1=temp1->next;
        temp1->next=temp;
    }
}
void print(){
    node *temp2 = new node();
    temp2= head;
    while(temp2->next!=NULL){
        cout<<temp2->data<<endl;
        temp2=temp2->next;
        if(temp2->next==NULL)
            cout<<temp2->data<<endl;
    }
}
int main(){

    int n,i,x;
    cin>>n;
    head=NULL;
    for(i=0;i<n;++i){
        cin>>x;
        Insert(x);
    }
    print();
    return 0;
}
