#include <stdio.h>
#include <string.h>
void main()
{
	char str[20];
	int i,j,len;
	printf("Enter a string:");
	fgets(str, sizeof(str), stdin);
	len=strlen(str);
	int freq[len];
	for(i=0;i<len;i++)
	{
		freq[i]=1;
		for(j=i+1;j<len;j++)
		{
			if(str[i]==str[j])
			{	
				freq[i]++;
				str[j]='0';
			}
		}
	}
	printf("The characters and frequencies are:\n");
	for(i=0;i<len;i++)
	{	
		if(str[i]!='0')
		{
			printf("'%c' %d\n",str[i],freq[i]);
		}
	}
}

