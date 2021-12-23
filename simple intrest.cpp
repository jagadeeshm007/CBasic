#include<stdio.h>
main()
{
float p,t,r,s;
printf("enter principal amount\n");
scanf("%f" ,&p);
printf("enter time [in years]\n");
scanf("%f" ,&t);
printf("enter rate of interest\n");
scanf("%f" ,&r);
s= p*(1+((r/100)*t));
printf("simple inerest is %.2f \n" ,s);
} 
