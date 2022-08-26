#include<stdio.h>
#include<string.h>
main()
{
	char name[5][10];
	int i,j,len;
	printf("ENTER ANY 5 STUDENTS NAME\n");
	for(i=0;i<=4;i++)
	{
		scanf("%s",name[i]);
	}
		for(i=0;i<=4;i++)
	{
	 printf(" \nTHE NANE OF STUDENTS ARE=%s",name[i]);
	}
	printf("\n THE LENGTH OF NAME ARE= ");
	for(i=0;i<=4;i++)
	{
		len=0;
		len=strlen(name[i]);
		printf("\n THE LENGTH OF %s IS=%d",name[i],len);
	}
	printf("\n THE NAME OF STUDENTS IN REVERSE ORDER=");
	for(i=0;i<=4;i++)
	{
		for(j=strlen(name[i])-1;j>=0;j--)
		{
		     printf("%c",name[i][j]);	
		}
		printf("\n");
	}
	
}
