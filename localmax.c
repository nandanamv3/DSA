#include <stdio.h>
void main()
{
	int a[20],i,j,n;
	printf("Enter the size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	
		if(i==0)
		{
			if(a[i]>a[n-1] && a[i]>a[i+1])
			printf("%d \t",a[i]);
		}
		
		else if(i==n-1)
		{
			if(a[i]>a[i-1] && a[i]>a[0])
			printf("%d \t		",a[i]);
		}
		
		else if(a[i-1]<a[i] && a[i+1]<a[i])
		{
			printf("%d \t",a[i]);
		}
	}
	printf("\n");
}
		
		
	
