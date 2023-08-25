//Basics of doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    struct node *prev;
};

struct node * traversal(struct node *h1)
{
printf("Elements of DOOUBLY linked list are\n");
    struct node * t1;
    t1=h1;
    while(t1!=NULL)
    {
        printf("Ele -> %d \n",t1->data);
        t1=t1->next;
    }
}

struct node * create_newdll()
{
    printf("enter the no of nodes\n");
    int i,n,dta,d1;
    scanf("%d",&n);
    struct node * head,*ptr,*tmp1;
    head = (struct node *)malloc(sizeof(struct node));
    if(n>0)
    {
        printf("Enter the data for %d nodes \n",n);
        scanf("%d",&dta);
        head->prev=NULL;
        head->data=dta;
        head->next=NULL;
    }
    tmp1=head;
    //printf("Enter the %d ele for %d nodes \n",i);
    for(i=2;i<=n; i++)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&d1);
        ptr->data=d1;
        ptr->next=NULL;
        ptr->prev=tmp1;
        tmp1->next=ptr;
        tmp1=tmp1->next;
    }
    
    return head;

}  

struct node * insert_first(struct node * headis)
{
    struct node * ptr,*t1;
    int iele;
    t1=headis;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data \n");
    scanf("%d",&iele);
    ptr->data=iele;
    ptr->next=t1;
    ptr->prev=NULL; 
    t1->prev=ptr;
    //headis=ptr;
    return ptr;
}

struct node * insert_last(struct node * headl)
{
    struct node * ptr,*t1;
    int iele;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data \n");
    scanf("%d",&iele);
    ptr->data=iele;
    ptr->next=NULL;

    t1=headl;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=ptr;
    ptr->prev=t1;
    return headl;
}

struct node * insert_loc(struct node * headloc)
{
    struct node * ptr,*t1,*t2;
    int i,iele,loc;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data and loc \n");
    scanf("%d%d",&iele,&loc);
    ptr->data=iele;
    
    t1=headloc;
    for(i=1;i<loc;i++)
    {
        t2=t1;
        t1=t1->next;
    }
    ptr->prev=t2;
    ptr->next=t1;
    t2->next=ptr;
    t1->prev=ptr;
    return headloc;
}

int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
   
  /* 
     struct node * head,*sec,*third;
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=1;
    head->next=sec;

    sec->prev=head;
    sec->data=2;
    sec->next=third;
    
    third->prev=sec;
    third->data=3;
    third->next=NULL;
    traversal(head);*/
   
    //creating new doubly linked list
    head=create_newdll();
    traversal(head);

    int choice=0;
    //inserting new node at the starting
    printf("Enter 1 to insert new node at the beginning of doubly ll else 0\n");
    scanf("%d",&choice);
    if(choice==1)
    {
    head=insert_first(head);
    traversal(head);
    }

    //inserting new node at the desired loc
    printf("Enter 1 to insert new node at the desired loc in doubly ll else 0\n");
    scanf("%d",&choice);
    if(choice==1)
    {
    head=insert_loc(head);
    traversal(head);
    }
    
    //inserting new node at the last
    printf("Enter 1 to insert new node at the last of doubly ll else 0\n");
    scanf("%d",&choice);
    if(choice==1)
    {
    head=insert_last(head);
    traversal(head);
    }

    return 0;
}