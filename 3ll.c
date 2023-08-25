//Understanding the basic input data and linking LINKED LIST NODES -->> INSERTING NEW NODE
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

struct node * traversal(struct node *h1)
{
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=h1;
    while(t1!=NULL)
    {
        printf("Ele -> %d \n",t1->data);
        t1=t1->next;
    }
}

struct node * insert_begg(struct node *head,int d1)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = d1;
}
struct node * insert_last(struct node *hlast,int d2)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *t1;
    ptr->data = d2;
    ptr->next = NULL;
    t1=hlast;
    while(t1!=NULL)
    {
        t1=t1->next;
    }    ptr=t1->next;
    return hlast;
}

struct node * insert_loc(struct node *hloc,int locd,int loc)
{
    struct node * ptr,*h3,*t3;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=locd;
    h3=hloc;   int i;
    for (i=1; i<loc-1; i++)
    {
        h3=h3->next;
    }
    t3=h3->next;
    h3->next=ptr;
    ptr->next=t3;
    return hloc;
}
int main()
{
    struct node * head,*sec,*third;
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=third;
    third->data=3;
    third->next=NULL;

    traversal(head);         
   // head=insert_begg(head,4);
//    head=insert_last(head,99);    
    head=insert_loc(head,99,3);    
    traversal(head);

    

    return 0;
}
