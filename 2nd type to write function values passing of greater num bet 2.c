#include<stdio.h>
yash(int x,int y)
{
int c;
if(x>y)
c=x;
else
c=y;
	
}

int main()
{
	int a,b,c;
	printf("enter the num\n");
	scanf("%d",&a);
	printf("enter the num\n");
	scanf("%d",&b);
   c=yash(a,b);
   printf("the greater num is %d",c);	
}
