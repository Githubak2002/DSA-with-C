//  Implimentation of QUEUE using Linked List
//  INSERTION from rear end and DELETION from front end
//  NOTE : over/underflow condition? NOT COMPLETE
//  ONLY ONE CONDITION (UNDERFLOW) IS NOT WORKING  

//kanagarg96@.......



/* // imlimentation of queue using ll   99 % correct
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(front == NULL && rear == NULL)
    {
        front = newNode;    rear = newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }    
}

void dequeue()
{
    struct node *temp;
    //struct node *newNode = malloc(sizeof(struct node));
    if(front == NULL)
        printf("link list is empty\n"); 
    else
    {
        temp = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        free(temp);
    }
    
}

void traverse()
{
    if(front == NULL && rear == NULL){
        printf("link list is empty\n");
        exit(0);
    }
    printf("Ele of link list are\n");
    struct node *ptr = front;
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }   printf("NULL\n");
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    //enqueue(4);
    
    traverse();

    dequeue();
    
    traverse();

    return 0;
}

*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void traversal(struct node *r,struct node *f)
{
printf("Elements of linked list are\n");
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=r;
    while(t1!=NULL)
    {
        if(t1==r)
        printf("Rear ele in queue  -> %d\n",t1->data);
        else if(t1==f)
        printf("Front ele in queue -> %d\n",t1->data);
        else
        printf("Ele in queue       -> %d\n",t1->data);
        t1=t1->next;
    }
}

struct node* insert(struct node * rear)
{
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    // if(ptr==NULL)                   //OVERFLOW condition ?
    // {                
    //     printf("Computer memory is full (stack overflow)\n");
    //     exit(0);                    //won't be possible
    // }
    printf("Enter the ele to be pushed into queue \n");
    int push_ele;
    scanf("%d",&push_ele);
    ptr->data=push_ele;
    ptr->next=rear;
    return ptr;
}

struct node* dqueue(struct node * r,struct node * f)
{
    if(r==NULL){                            //UNDERFLOW
        printf("QUEUE is empty\n"); 
        exit(0);
    }
    struct node* ptr, *temp;
    ptr = r;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    if(f==r){
    f=NULL; 
    r=NULL;
    printf("stta executed\n");      //problem not showing queue is empty
    return f;
    }
    else{
    temp->next=NULL;
    return temp;
    }
}

int main()
{
    struct node * rear,*sec,*front;
    rear = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    front = (struct node *)malloc(sizeof(struct node));

    rear->data=3;
    rear->next=sec;
    sec->data=2;
    sec->next=front;
    front->data=1;
    front->next=NULL;
    printf("\nInsertion from rear end and deletion from front end\n\n");

    // traverse fun
    // traversal(rear,front);

    // insertion in queue
    rear = insert(rear);        traversal(rear,front);

    // deletion in queue
    //rear = dqueue(rear,front);      
    //rear = dqueue(rear,front);      
    // rear = dqueue(rear,front);     

    // traversal(rear,front);
return 0;
}

/*  #include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void traversal(struct node *r,struct node *f)
{
    if(f==NULL)
    {
        printf("Underflow\n");
    }
    printf("Elements of linked list are\n");
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=r;
    while(t1!=NULL)
    {
        if(t1==r)
        printf("Rear ele in queue  -> %d\n",t1->data);
        else if(t1==f)
        printf("Front ele in queue -> %d\n",t1->data);
        else
        printf("Ele in queue       -> %d\n",t1->data);
        t1=t1->next;
    }
}

struct node* insert(struct node * rear,int d)
{
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    // if(ptr==NULL)                   //OVERFLOW condition ?
    // {                
    //     printf("Computer memory is full (stack overflow)\n");
    //     exit(0);                    //won't be possible
    // }
    ptr->data=d;
    ptr->next=rear;
    return ptr;
}

/*  struct node* dqueue(struct node * r,struct node * f)
{
    if(r==NULL){                            //UNDERFLOW
        printf("QUEUE is empty\n"); 
        exit(0);
    }
    struct node* ptr, *temp;
    ptr = r;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    if(r->next==NULL){
    //f=NULL; 
    r=NULL;
    //printf("stta executed\n");      //problem not showing queue is empty
    return r;
    }
    else{
    temp->next=NULL;
    return temp;
    }
}
*/


/*  struct node* dqueue(struct node * r,struct node * f)
{
    if(r==NULL){                            //UNDERFLOW
        printf("QUEUE is empty\n"); 
        exit(0);
    }
    struct node* ptr, *temp;
    ptr = r;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    if(f==r){
    f=NULL; 
    //printf("stta executed\n");      //problem not showing queue is empty
    return f;
    }
    else{
    temp->next=NULL;
    return temp;
    }
}

int main()
{
    
    struct node * rear,*sec,*front;
    rear = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    front = (struct node *)malloc(sizeof(struct node));

    rear->data=3;
    rear->next=sec;
    sec->data=2;
    sec->next=front;
    front->data=1;
    front->next=NULL;

    printf("\nInsertion from rear end and deletion from front end\n\n");
    
    struct node * rear,*sec,*front;
    rear = (struct node *)malloc(sizeof(struct node));

    // traverse fun
    // traversal(rear,front);   

    // insertion in queue
    //rear = insert(rear,4);        traversal(rear,front);

    //deletion in queue
    // rear = dqueue(rear,front);      
    // rear = dqueue(rear,front);      
    // rear = dqueue(rear,front);     

    traversal(rear,front);



return 0;
}

*/