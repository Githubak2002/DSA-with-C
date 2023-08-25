#include<stdio.h>
int bin_search(int arr[],int h,int l,int s_ele)
{	
	int mid;
	while(l!=h)
	{
		mid=(l+h)/2;
		if(arr[mid]==s_ele)
			return mid;	
		else if (arr[mid]>s_ele)
			h=mid-1;
		else if (arr[mid]<s_ele)
			l=mid+1;
	}
	if(arr[h]==s_ele)
	return h;
	else 
	return -1;
}
int main()
{
	int i,n;
    printf("Enter the no of ele in array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the ele of array\n");
    for (i = 1; i <= n; i++)
        scanf("%d",&a[i]);
	/*
	printf("Array ele are\n");
	for (i = 0; i < n; i++)
        printf("%d\n",a[i]); 
	*/
	int res,search_ele,high,low;
	high=n;
	low=1;
	printf("Enter the ele needs to be search\n");
	scanf("%d",&search_ele);
	res = bin_search(a,high,low,search_ele);
	if(res==-1)
	printf("Ele does not exist\n");
	else
	printf("Ele is present at location %d\n",res);
	
	return 0;
}
