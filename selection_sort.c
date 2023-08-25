// selecting min and place that at the starting, 1st ele sorted, find min leaving 1st ele and placing it after the sorted array


#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void selectionsort (int a[],int n)
{
    int i,j,h=-1,min = a[0];
    for(i=0;i<n-1;i++)
    {
        min = a[i];
        for(j=i;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                h=j;
            }
        }
        if(h!=-1){
        // if(a[i]<a[h])
            swap(&a[i],&a[h]);
            }
    }
}


int main(){
    
    int A[] = {1,4,5,7,3,9};
    int n = 6;
    printArray(A, n);
    selectionsort(A, n);
    printf("After selection sort \n");
    printArray(A, n);
    return 0;
}