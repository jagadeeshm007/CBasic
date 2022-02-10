#include<stdio.h>
int main()
{
	int i,j,m,n,r,g;
	printf("array size \n");
	scanf("%d %d" ,&m,&n);
	r=m*n;
	int a[m][n],b[m][n],c[m][n];
	printf("enter the array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<m-1;i++) 
	{
		for(j=1;j<n-1;j++) 
		{
			  c[i][j]=a[i][j];
		      b[i][j]=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];	
		}
	}
	g=b[1][1];
    for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(g<b[i][j])
			{
				g=b[i][j];	
			}
			
		}
	}
	 for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
		  if(g==b[i][j])
		  {
		  	printf("%d in array, and it's sum of it direction values is %d" ,a[i][j],g);
		  	break;
		  }
		}
			break;
	}
}
