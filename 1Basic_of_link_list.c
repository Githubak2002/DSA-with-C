//Understanding the basic input data and 
//linking LINKED LIST NODES
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
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
    
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=head;
    while(t1!=NULL)
    {
        printf("data = %d\n",t1->data);
        t1=t1->next;
    }
    return 0;
}
