#include<stdio.h>
int main()
{
	int i,a,k;
	printf("enter a number");
	scanf("%d" ,&a);
	for(i=1;i<=a;i++) 
	{
		if(a%i==0)
		{
			printf("%d \ " ,i);
		} 
	}
	k=a^a;
	printf("%d" ,i);
}
