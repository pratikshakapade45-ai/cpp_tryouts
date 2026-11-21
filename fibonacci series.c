#include<stdio.h>
int main()
{
	int a=0,b=1,n,c,i;
	printf("enter the series\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
		
	}
	
	
	
	
	
	
	return 0;
	
}
