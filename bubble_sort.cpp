//Paul107117068
#include<stdio.h>
int main()
{
	int arr[100],n,i,j,temp;
	printf("ënter the number of elements");
	scanf("%d",&n);
	printf("ënter %d integers \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    printf("sorted array \n");
	for(i=0;i<n;i++)
	{
		  printf("%d \n",arr[i]);
	}
	return 0;
}
