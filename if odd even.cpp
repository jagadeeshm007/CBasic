#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d" ,&a);
    b=a%2;
	if(b==0 )
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
} 
