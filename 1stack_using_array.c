#include<stdio.h>
#include<stdlib.h>
int maxsize = 8, stk[8],top=-1;
int isempty()
{
    if(top == -1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(top == maxsize)
    return 1;
    else
    return 0;
}
int push (int data)
{
    if(!isfull())
    {
        top=top+1;
        stk[top]=data;
    }
    else{
        printf("could not insert data\n");
    }
}
int main()
{
    push(1);
    push(2);


    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    printf("at index 0 ele is = %d\n",stk[0]);
    printf("at index 1 ele is = %d\n",stk[1]);

    return 0;
}











// #include<stdio.h>
// #include<stdlib.h>
// struct stack
// {
//     int top,size;
//     int * arr;
// };
// int isempty(struct stack * ptr)
// {
//     if(ptr->top == -1)
//     {
//     return 1;
//     }   
//     else
//     {
//     return 0;
//     }
// }
// int isfull(struct stack * ptr)
// {
//     if(ptr->top == ptr->size -1)
//     {
//     return 1;
//     }   
//     else
//     {
//     return 0;
//     }
// }

// int main()
// {
//     printf("Working?\n");

//     // struct stack s;
//     // s.size = 80;
//     // s.top = -1;
//     // s.arr = (int *)malloc(s.size * sizeof(int));
//     struct stack *s;
//     s->size = 80;
//     s->top = -1;
//     s->arr = (int *)malloc(s->size * sizeof(int));
//     if(isempty(s))
//     {
//     printf("empty\n");
//     }
//     else{
//     printf("not empty\n");
//     }

//     printf("Working?\n");

//     return 0;
// }
