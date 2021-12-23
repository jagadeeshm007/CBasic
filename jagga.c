#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter another number");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("%d + %d =%d \n",a, b, c);
	printf("%d - %d =%d \n",a, b, d);
	printf("%d + %d =%d \n",a, b, e);
	printf("%d + %d =%d \n",a, b, f);
}
