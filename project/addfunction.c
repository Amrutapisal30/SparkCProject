// without return type with parameter

#include<stdio.h>

void add(int a,int b);
void sub(int a,int b);
int a,b,c;

main()
{
	printf("\n enter a & b value");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	printf("spark institute");
	
}
void add(int a,int b)
{
	c=a+b;
	printf("\n c=%d",c);
}
void sub(int a,int b)
{
	c=a-b;
	printf("\n c=%d",c);
}
