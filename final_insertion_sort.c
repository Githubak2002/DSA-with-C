// Selection sort in C
#include <stdio.h>
   
void swap(int *p1,int *p2)
{
	int t;	t=*p1;
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
       /* t = a[x];
        a[x] = a[i];
        a[i] = t; */
    }
}
// function to print an array
void printarray(int arr[],int size)
{
	int i;
  for (i = 0; i<size ; i++)
  {
    printf("%d\n", arr[i]);
  }
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
