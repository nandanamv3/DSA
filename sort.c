#include <stdio.h>
void sort(int mark[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{	
			if(mark[j]<mark[j+1])
			{
				temp=mark[j];
				mark[j]=mark[j+1];
				mark[j+1]=temp;
			}
		}
		
	}
	printf("The sorted marks are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",mark[i]);
	}
}

void insert(int m,int mark[],int n)
{
	int i=n;
	while(i>0 && mark[i-1]<m)
	{
		mark[i]=mark[i-1];
		i--;
	}
	mark[i]=m;
	for(i=0;i<n+1;i++)
	{
		printf("%d \t",mark[i]);
	}
}
	

void main()
{
	int mark[20],i,n,m;
	printf("Enter no. of marks:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&mark[i]);
	}
	sort(mark,n);
	printf("\nEnter the no. to input:");
	scanf("%d",&m);
	insert(m,mark,n);
	printf("\n");
}
	
