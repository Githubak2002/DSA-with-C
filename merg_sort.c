//merge sort
//partationing I know but merge sort recursive fun??

#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    mergeSort(A, 0, 6);
    printArray(A, n);
    return 0;
}






//merg sort in lab


/*
#include<stdio.h>
#define size 5;
int a[5]={3,2,4,1,6};
int t[5]; 
void swap(int *p1,int *p2)
{
int t;
t=*p1;
*p1=*p2;
*p2=t;
}
//print temp array
void print_t(int x[],int s)
{
    int i=0;
    for(i=0;i<s;i++)
        printf("%d\n",x[i]);
}
void merge(int a[],int b,int m,int e)
{
int i,j,index=0;    i=b; j=m+1;
while(i<=m && j<=e)
{
    if(a[i]<a[j]){
        t[index]=a[i];
        i=i+1;
    }
    else{
    t[index]=a[j];
    j=j+1;
    }
    index=index+1;
}
if(i>m)
{
    while(j<=e)
    {
        t[index]=a[j];
        ++j; ++index;
    }
}
if(j>e)
{
    while(i<=m)
    {
        t[index]=a[i];
        ++i; ++index;
    }
}


}
int main()
{
    int beg=0,end=size-1; 
    int mid=(beg+end)/2;
    merge(a[],beg,mid,end);
    print_t(t[],size);
    return 0;
}
*/