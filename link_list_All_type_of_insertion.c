//All type of insertion
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

struct node * traversal(struct node *h1)
{
printf("Elements of linked list are\n");
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=h1;
    while(t1!=NULL)
    {
        printf("Ele -> %d \n",t1->data);
        t1=t1->next;
    }
}

struct node * insert_begg(struct node *h2,int d1)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    //struct node *p1;
    ptr->data = d1;
    ptr->next = h2;
    return ptr;
}

struct node * insert_loc(struct node *hloc,int locd,int loc)
{
    struct node * ptr,*h3,*t3;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=locd;
    h3=hloc; int i;
    for (i=1; i<loc-1; i++)
    {
        h3=h3->next;
    }
    t3=h3->next;
    h3->next=ptr;
    ptr->next=t3;
    return hloc;
}

struct node * insert_last(struct node *hd,int d2)
{
  // printf("this fun is getting called\n");
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *t1;
    ptr->data = d2;
    ptr->next = NULL;
    t1=hd;
    while(t1 != NULL && t1->next != NULL) //how and why
    //while(t1!=NULL) fails
    {
        t1=t1->next;
    }  
    t1->next=ptr;
   
    return hd;
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
   
 //   printf("value of head = %d\n",head);

int choice=1;
printf("By default ");
    traversal(head);        
   // head=insert_begg(head,4);
// head=insert_last(head,99);    


// new node at the the starting of linked list
printf("Enter 1 to insert new node at starting of the linked list else 0\n");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter the ele \n");
int elestart;
scanf("%d",&elestart);
head=insert_begg(head,elestart);
printf("Enter 1 to treaverse else 0\n");
scanf("%d",&choice);
if(choice==1)  
    traversal(head);
}

// new node at desired location
printf("Enter 1 to insert new node at desired loc else 0\n");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter the ele and loc for new node\n");
int eleloc,loc1;
scanf("%d%d",&eleloc,&loc1);
if(loc1==1)
head=insert_begg(head,eleloc);
else
head=insert_loc(head,eleloc,loc1);
printf("Enter 1 to treaverse else 0\n");
scanf("%d",&choice);
if(choice==1)  
    traversal(head);
}
   

// new node at the the end of linked list
printf("Enter 1 to insert new node at last else 0\n");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter the ele\n");
int eleend;
scanf("%d",&eleend);
head=insert_last(head,eleend);
}
printf("Enter 1 to treaverse else 0\n");
scanf("%d",&choice);
if(choice==1)  
    traversal(head);


    return 0;
}