#include<stdio.h>
int add();
void main()
{
int ans;	
ans=add();	
printf("the sum will be %d\n",ans);	
	
}
int add()
{
	int a,b,c;
	printf("enter the two num for sum\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
	
}
