#include<stdio.h>
main()
{
	int a[10][10], b[10][10], c[10][10],i,j,r1,c1;
	
	printf("\n enter no of row and column=");
	scanf("%d%d",&r1,&c1);
	
	printf("\n enter matrix a=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n enter matrix b=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n addition of matrix is=\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\t %d",c[i][j]);
		}printf("\n");
	}
}
