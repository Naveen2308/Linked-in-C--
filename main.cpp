#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void printing(node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
void insertBegin(node* *head,int value){
    
    node* newNode=new node();
    newNode->data=value;
    
    newNode->next=*head;
    *head=newNode;
}
void insertEnd(node* *head,int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=NULL;
    if(*head == NULL){
        *head=newNode;
        return;
    }
    node* last=*head;
    while(last->next!=NULL){
        last=last->next;
    }
    
    last->next=newNode;
}
void insertAtprevious(node* previous,int value){
    if(previous->next==NULL){
        cout<<"previous next is not NULL"<<endl;
        return;
    }
    node* newNode=new node();
    newNode->data=value;
    newNode->next=previous->next;
    previous->next=newNode;
    
}
int main(){
    node* head=new node();
    node* secound=new node();
    
    head->data=1;
    head->next=secound;
    secound->data=2;
    secound->next=NULL;
    insertBegin(&head,10);
    insertAtprevious(head,40);
    insertEnd(&head,50);
    printing(head);
}
