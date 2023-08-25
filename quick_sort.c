// partation part i know but quick sort part?
//quick sort
//code with harry

#include <stdio.h>

void swap(int *p1, int *p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void printarray(int a[], int n)
{
    printf("ele of array are\n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int part(int a[], int low, int high)
{
    int i, j, pivot = a[low];
    i = low + 1;
    j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(&a[j], &a[i]);
    } while (i < j);
    swap(&a[low],&a[j]);
    return j;
}
void quicksort(int a[], int low, int high)
{
    int pivotindex; // index of pivot after partation
    if (low < high)
    {
        pivotindex = part(a,low,high);
        quicksort(a, low, pivotindex - 1);    //sort left subarray
        quicksort(a, pivotindex + 1, high);   //sort right subarray
    }
    //return 0;
}
int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printarray(A, n);
    quicksort(A,0,n-1);
    printarray(A,n);

    return 0;
}