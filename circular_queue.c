// CIRCULAR QUEUE in c 
// DELETION takes place from front side

// INCOMPLETE dequeue remains    (COPIED FROM PROGRAMIZ)
/*
#include<stdio.h>
#define size 5       //defining the size of queue = 5
int q[size],f=-1,r=-1;

int isfull()
{
    if((f==r+1)||(r=size-1 && f==0))   
    return 1;
    return 0;
}
int isempty()
{
    if(f==-1) 
    return 1;
    return 0;
}
void enqueue(int a)
{
    if(isfull())
        printf("Overflow / queue is full\n");
    else 
    {
        if(f==-1)  
        f=0;
        r=r+1;
        q[r]=a;
    }
}

void dequeue()
{
    if(isempty()){
        printf("Underflow/empty\n");
        return -1;
    }
    else if(f>r)
        f=r=-1;
    else
        f=f+1;
}

void display(int r,int f)
{
    printf("Ele of queue are\n");
    for(int i=r;i>=f;i--)
    {
        if(i==f || i==0)
            printf("FRONT ele in queue = %d\n",q[i]);
        else if(i==r)
            printf("REAR ele in queue  = %d\n",q[i]);
        else
            printf("Ele in queue       = %d\n",q[i]);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    //enqueue(4);
    //enqueue(5);
    //display(r,f);
    dequeue();
    dequeue();
    dequeue();
    enqueue(3);
    enqueue(5);
    display(r,f);

    return 0;
}
*/

#include<stdio.h>
# define size 5

int f,r;  f=-1; r=-1;
int q[size];
int isfull()
{
    if((f==0 && r==size-1)|| (f-r==1))   //correct condition for full
    return 1;
    return 0;
}
int isempty()
{
    if(f==-1)
    return 1;
    return 0;
}

void enqueue(int ele)
{
    if(isfull() == 1)
    printf("Queue is full\n");
    else
    {
    if(f==-1)   f=0;
    r=(r+1)%size;
    q[r]=ele;
    printf("Inserted ele = %d",ele);
    }
}
    

int main()
{
    enqueue(1);

    return 0;
}