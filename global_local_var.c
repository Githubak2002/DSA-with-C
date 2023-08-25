#include<stdio.h>
int v = 8;
int main()
{
    printf("value of GLOBAL var v before declearing in min fun = %d\n",v);
    v = 6;
    printf("value of var v after reassigning in min fun = %d\n",v);
    v = v/2;
    printf("value of now v = %d",v);
    return 0 ;
}