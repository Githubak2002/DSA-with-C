#include<stdio.h>
#include<malloc.h>
#define qsize 6
// malsco vs stdlib
// struct queue{
//     int data;
//     int f,r; 
// };

int isempty(int f, int r)
{
    if(f == r || f == -1)
        return 1;
    else
        return 0;
}

int isfull(int r)
{
    if(r == qsize-1)
        return 1;
        // printf("Queue is full\n");
    else
        return 0;
}

int enqueue(int f,int r,int d,int q[])
{
    // if(isfull(r)){
    //     printf("Queue is full\n");
    //     return 0;
    // }
    if(f==-1)
    {
        f=r=0;
        q[r]=d;
    }
    else
    { 
    r=r+1;
    q[r]=d;
    }
    return 0;
}

void printQueue(int q[])
{
    printf("ele in the queue are\n");
    for (int i = 0; i < qsize; i++)
    {
        printf("%d ",q[i]);
    }
        printf("\n");
    
}

    int q[qsize];
    int r=-1,f=-1;
int main()
{
    enqueue(f,r,1,q);
    enqueue(f,r,2,q);
    enqueue(f,r,3,q);
    printQueue(q);

    return 0;
}
