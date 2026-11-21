#include<stdio.h>
int add(int a,int b);
void main()
{
	int a,b,ans;
	printf("enter the two num for sum\n");
	scanf("%d %d",&a,&b);
	ans=add(a,b);
	printf("the sum is %d",ans);
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
