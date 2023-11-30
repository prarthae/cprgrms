#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* add123(struct node* head, int d)
{
    struct node*ptr = malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link = head;
    head = ptr;
    return head;

}

void main() {
    int d,i=1,n;
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head ->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    while(i<=n){
    printf("enter data to be inserted : ");
    scanf("%d",&d);
    head= add123(head,d);
    i=i+1;
    }

    while(head !=NULL)
    {
        printf("%d\t",head->data);
        head=head->link;

    }
    

    
}