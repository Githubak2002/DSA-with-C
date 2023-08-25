//Implimentation of stack using Linked List in LAB
// NOTE : STILL NEEDS SWITCH CASE FOR PUSH AND POP AS DESIRED CHOICE TO USER
// 100% correct
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void traversal(struct node *h1)     //here h1 is top
{
printf("Traversal of STACK\n");
    struct node * t1;
    t1 = (struct node *)malloc(sizeof(struct node));
    t1=h1;
    if(t1!=NULL)
        printf("TOP Ele -> %d \n",t1->data);
    t1=t1->next;
    while(t1!=NULL)
    {
        printf("Ele -> %d \n",t1->data);
        t1=t1->next;
    }
}

struct node* push(struct node * h,int push_ele)
{
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){                  //OVERFLOW
        printf("Computer memory is full (stack overflow)\n");
        exit(0);        //won't be possible
    }
    ptr->data=push_ele;
    ptr->next=h;
    printf("Ele -> %d is pushed into stack\n",push_ele);
    return ptr;
}

struct node* pop(struct node * top)
{
    if(top==NULL){                   //UNDERFLOW
        printf("Stack is empty\n"); 
        return top;
    //printf("printing after exit(0)\n");
    }
    //printf("printing after exit and if stat\n");
    struct node* ptr ,* t = top;
    printf("Ele -> %d is poped from stack\n",t->data);
    t=t->next;
    free(ptr);

    return t;
}

int main()
{
    /* default stack
    struct node * head,*sec,*third;
    // TAKING HEAD AS TOP
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=third;
    third->data=3;
    third->next=NULL;
    */


    struct node * top;
    // TAKING HEAD AS TOP
    top = NULL; //(struct node *)malloc(sizeof(struct node));
    
    top = pop(top);
    top = push(top,3);
    top = push(top,2);
    top = push(top,1);
    traversal(top);
    top = pop(top);
   
    traversal(top);

    return 0;
}