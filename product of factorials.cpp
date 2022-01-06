#include<stdio.h>
int main()
{
	int a,j=1,i;
	printf("enter a number \n");
	scanf("%d" ,&a);
	for(i=1;i<=a;i++)
	{
		j = j*i;
	}
	printf("%d" ,j);	
} 
