#include <stdio.h>
#include <stdlib.h>

struct node{
struct node*prev;
int data;
struct node*next;
};
struct node*empty(struct node* head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    temp->data=data;
    head=temp;
    return head;
}
struct node*begg(struct node*head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->next=NULL;
    temp->data=data;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
void main(){
    struct node*head=NULL;
    struct node*ptr;
    int x;
    head=empty(head,40);
    head=begg(head,50);
    head=begg(head,30);
    printf("enter value : ");
    scanf("%d",&x);
    head=begg(head,x);
    ptr=head;
    while(ptr !=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}


