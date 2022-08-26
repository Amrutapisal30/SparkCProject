#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("ENTER 1ST STRING = ");
	gets(s1);
		printf("ENTER 2ND STRING = ");
	gets(s2);
	strcat(s1,s2);
	printf("\n THE CONCATATION OF TWO STRIN IS=%s",s1);
}
