#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
};
node* reverseList(node* head){
    node* curr=head;
    node* prev=NULL;
    node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;

}
void reverselist1(node* n){
    n=reverseList(n);
    while(n !=NULL){
        cout<<n->val<<endl;
        n=n->next;
    }
}
void printing(node* n){
    while(n!=NULL){
        cout<<n->val<<endl;
        n=n->next;
    }
}
void insertAtEnd(node* *head,int data){
    node* newnode=new node();
    newnode->val=data;
    newnode->next=NULL;
    if(*head == NULL){
        *head=newnode;
        return;
    }
    node* last=*head;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newnode;
    
}
void insertBegin(node* *head,int data){
    node* newnode=new node();
    newnode->val=data;
    newnode->next=NULL;
    newnode->next=*head;
    *head=newnode;
}

int main(){
    node* head=new node();
    head->val=15;
    head->next=NULL;
    insertBegin(&head,20);
    insertAtEnd(&head,10);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    cout<<"original list"<<endl;
    printing(head);

    cout<<"*******"<<endl;
    cout<<"reeversed list"<<endl;
    reverselist1(head);
    
    printing(head);
    
}
