#include<stdio.h>
main()
{
	int c,s;
	printf("enter cost price\n");
	scanf("%d" ,&c);
	printf("enter selling price\n");
	scanf("%d" ,&s);
	if(s>c)
	{
		printf("profit");
	}
	else
	{
		printf("loss");
	}
}
