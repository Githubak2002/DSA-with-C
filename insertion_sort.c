// insertion sort in C [100 % correct]

#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
/*  void selectionSort(int *A, int n){
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
*/

void insertionSort(int array[], int size) 
{
	int i;
	for (i = 1; i<size; i++) {
    int key = array[i];
    int j = i - 1;

    // Compare key with each element on the left of it until an element smaller than it is found.
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main(){
    
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}


/* prog by me working
#include <stdio.h>
void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
void sort(int a[], int n)
{
    int i,j,min,t1,x;
    for(i=0;i<n-1;i++)
    {
        min=a[i]; t1=0;
        
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
            min=a[j];
            x=j; 
			t1=t1+1;
            }
        }
        if (t1!=0)
        swap(&a[x],&a[i]);
        // t = a[x];
        // a[x] = a[i];
        // a[i] = t; 
    }
}


// function to print an array
void printarray(int arr[],int size)
{
	int i;
  for (i = 0; i<size ; i++)
  {
    printf("%d ", arr[i]);
  } printf("\n");
}

// driver code
int main()
{
    int i,n;
    printf("enter the no of ele in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the ele of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort (a,n);
    //int size=n;
   
    printf("Sorted array in Acsending Order:\n");
    printarray(a,n);
}

*/
  
//not working properlyy for the below code
/*  void selection_sort(int *a,int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min = a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            swap(&a[j],&a[i]);
        }
    }
}
*/
