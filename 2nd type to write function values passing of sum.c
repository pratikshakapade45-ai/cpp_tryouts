#include<stdio.h>
 add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
int main()
{
	int a,b,c;
	printf("enter the num\n");
	scanf("%d",&a);
	printf("enter the num\n");
	scanf("%d",&b);
	
   c=	add(a,b);
	printf("the sum is %d",c);
}
