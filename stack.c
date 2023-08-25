//POP and PUSH operataion on stack
#include<stdio.h>
int maxsize = 10, stk[9],top=-1;
void push ()
{
    int data;
    if(top == maxsize-1)
    printf("Stack is Full\n");
    else
    {
    printf("Enter the ele to be pushed in stack\n");
    scanf("%d",&data);
    top=top+1;
    stk[top]=data;
    }
}
void pop ()
{
    if(top == -1)
    printf("Stack is Empty\n");
    else
    top=top-1;
}
int out()
{
    int i;
    if(top == -1)
    printf("Stack is Empty\n");
    else
    {
        printf("Stack ele are\n");
        for(i=0;i<=top;i++)
        printf("%d\n",stk[i]);
    }
}
int main()
{
    int choice=1,con=1;
    while(con==1)
    {
    printf("Enter 1/0 for push/pop operation in stack\n");
    scanf("%d",&choice);
    if(choice==1)
    push();
    else if (choice==0)
    pop();
    else
    printf("Wrong input\n");
    printf("Enter 1 to perform operation else 0\n");
    scanf("%d",&con);
    }
    out();
    return 0;
}
