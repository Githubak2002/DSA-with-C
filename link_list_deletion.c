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

struct node * create_newll()
{
    printf("Enter the no of nodes to be created in inked list \n");
    int i,n,dta,d1;
    scanf("%d",&n);
    struct node * head,*ptr,*tmp1;
    head = (struct node *)malloc(sizeof(struct node));
    if(n>0)
    {
        printf("Enter the data for %d nodes\n",n);
        scanf("%d",&dta);
        head->data=dta;
        head->next=NULL;
    }
    tmp1=head;
    for(i=2;i<=n; i++)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        //printf("Enter the data for the node %d \n",i);
        scanf("%d",&d1);
        ptr->data=d1;
        ptr->next=NULL;
        tmp1->next=ptr;
        tmp1=tmp1->next;
    }
    
    return head;

}  

struct node * delet_firstnode(struct node * dfhead)
{ 
    if(dfhead==NULL)
    printf("Underflow");
    dfhead=dfhead->next;
    return dfhead;
}

struct node * delet_lastnode(struct node * dlhead)
{
    if(dlhead==NULL)
    printf("Underflow\n");
    struct node * t1,*t2;
    int i,count=0;
    t1=dlhead;
    t2=dlhead;
    while (t1!=NULL)
    {
        t1=t1->next;
        count++;
    }
    for(i=1;i<count-1;i++)
    {
        t2=t2->next;
    }
    t2->next=NULL;
    return dlhead;
}

/*struct node * delet_linkele(struct node * dlhead)
{
    struct node * t1,*t2;
    int ele,i,count=0;
    t1=dlhead;
    t2=dlhead;
    printf("Enter the ele to be deleted from the link list\n");
    scanf("%d",&ele);
    while (t1->data!=ele)
    {
        t1=t1->next;
        count++;
    }
    for(i=1;i<count-1;i++)
    {
        t2=t2->next;
    }
    t2->next=NULL;
    return dlhead;
}*/

int main()
{
    struct node * head;
    //head = (struct node *)malloc(sizeof(struct node));
    head=create_newll();
    traversal(head);
   
    int choice=1;
    while (choice!=0)
    {
        printf("\nEnter 1 to delete first node and 2 to delete last node 3 to traveerse else 0\n");
        //printf("Else print 0\n");
        scanf("%d",&choice);
        if(choice==1){
            head=delet_firstnode(head);  
        traversal(head);

        }
        if(choice==2){
            head=delet_lastnode(head);  
        traversal(head);

        }
        if(choice==3)
        traversal(head);
    }
    
    


//Deleting the first node in link list
    /*head=delet_firstnode(head);
    traversal(head);*/

//Deleting the last node in link list
   // head=delet_lastnode(head);
    //traversal(head);

    return 0;
}





