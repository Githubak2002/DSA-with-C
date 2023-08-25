// Polynomial eqa addition using array
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n1,n2,poly1[10],poly2[10];
    int coe, exp, temp;
    printf("Enter the no of coefficeint in 1st poly equ\n");
    scanf("%d",&n1);
    int max,temp1,temp2,m[7];
    for(i=0 ; i<n1 ; i++)
    {
        printf("Enter the coefficient with sign ");
        scanf("%d",&coe);
        printf("Enter the exponent ");
        scanf("%d",&exp);
        poly1[i]=0;
        poly1[exp]=coe;
        m[i]=exp;
    }
    //finding max exp value
    max=m[0];
    for (i = 0; i <n1; i++)
    {
        if(max<m[i])
        max=m[i];
    }   printf("max exp = %d\n",max);
    for (i = 0; i <= max; i++)
    {
        printf("%d = %d\n",i,poly1[i]);
    }

return 0;
}