#include<stdio.h>
int main()
{
	int j=0,i=1,a;
	printf("enter a number \n");
	scanf("%d" ,&a);
	while(i<=a)
	{
		j=j+i;
		i++;
	}
	printf("%d" ,j);
} 
