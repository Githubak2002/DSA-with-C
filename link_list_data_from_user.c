//Creating new node by taling i/p from the user
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

struct node * create_newll()
{
    printf("enter the no of nodes\n");
    int i,n,dta,d1;
    scanf("%d",&n);
    struct node * head,*ptr,*tmp1;
    head = (struct node *)malloc(sizeof(struct node));
    if(n>0)
    {
        printf("Enter the data for the first node\n");
        scanf("%d",&dta);
        head->data=dta;
        head->next=NULL;
    }
    tmp1=head;
    for(i=2;i<=n; i++)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for the node %d \n",i);
        scanf("%d",&d1);
        ptr->data=d1;
        ptr->next=NULL;
        tmp1->next=ptr;
        tmp1=tmp1->next;
    }
    
    return head;

}  

int main()
{
    struct node * head,*sec,*third;
    //head = (struct node *)malloc(sizeof(struct node));
    head=create_newll();
    traversal(head);
    return 0;
}