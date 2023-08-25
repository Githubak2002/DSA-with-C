// QUEUE in c 
// DELETION takes place front side
#include<stdio.h>
#define size 5          //defining the size of queue = 5
int q[size],f=-1,r=-1;

void enqueue(int a)
{
    if(r==(size-1))
        printf("Overflow\n");
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
    if(f==-1 && r==-1)
        printf("Underflow\n");
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
    enqueue(4);  enqueue(5);
    display(r,f);
    // dequeue();
    // dequeue();
    // dequeue();
    // enqueue(3);
    // enqueue(5);


    display(r,f);

    return 0;
}


//correct only 

// #include<stdio.h>
// int queue[5],size = 5,r=-1,f=-1;   //r for rear and f for front
// void insert(int ele)
// {
//     if(r == size-1)
//     printf("Queue is full\n");
//     else
//     {
//         if(f==-1)
//         f=0;  
//         r=r+1;
//         queue[r]=ele;
//         printf("Inserted -> %d \n",ele);
//     }
// }
// void delete()
// {
//     if(f == -1)
//     printf("Queue is empty\n");
//     else
//     {
//         printf("deleted ele is = %d\n",queue[f]);
//         f=f+1;
//         if(f>r);
//         f=r=-1;
//     }
// }
// void dis()
// {
//     if(r==-1)
//     printf("Queue is empty\n");
//     else
//     {   int i;
//         printf("Queue ele is/are\n");
//         for (i = f; i<= r; i++)
//         {
//             printf("%d\n",queue[i]);
//         }   
//     }
// }
// int main()
// {
//     delete();
//     insert(1);
//     insert(2);
//     dis();
//     delete();
//     dis();

//     return 0;
// }