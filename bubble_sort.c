// Bubble sort
// space and time complexity??????? 

#include <stdio.h>
//fun to swap
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

//fun to print array
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

//bubble sort
void bubble_sort(int *a,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j-1]>a[j])
            swap(&a[j-1],&a[j]);
        }
    }
}

int main()
{
    /*
    int t, n, i, j;
    printf("Enter the no of ele\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter the %d ele\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d",&A[i]);
    */

    int n=5,i,j,A[5]={5,4,6,7,2};

    printf("Array ele are \n");
    printArray(A,n);

    bubble_sort(A,n);
    printf("After bubble sort\n");
    printArray(A,n);
    
    return 0;
}