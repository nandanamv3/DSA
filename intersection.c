#include <stdio.h>
void main()
{
	int s1[]={1,2,3,4};
	int s2[]={3,4,5};
	int i,j;
	int size1=sizeof(s1)/sizeof(s1[0]);
	int size2=sizeof(s2)/sizeof(s2[0]);
	printf("The intersection is: {");
	for(i=0;i<size1;i++)
	{	
		for(j=0;j<size2;j++)
		{
			if(s1[i]==s2[j])
			{
				printf("%d", s1[i]);
				if (i != size1 - 1) 
				{
                    			printf(", ");
                    		}
                    	}
                }		
        }
        printf("}\n");

}
