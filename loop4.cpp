#include<stdio.h>
int main()
{
	int j,i;
	printf("enter a number \n");
	scanf("%d" ,&j);
	printf("enter  another number \n");
	scanf("%d" ,&i);
	while(i>j)
	{
		printf("%d" ,i);
		i--;
	}
} 
