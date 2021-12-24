#include<stdio.h>
main()
{
	int a;
	printf("enter a number\n");
	scanf("%d" ,&a);
	if(a>0)
	{
		printf("positive");
	}
	else if(a==0)
	{
		printf("zero");
	}
	else
	{
		printf("negitive");
	}
} 
