#include<stdio.h>
void check();
void main()
{
	check();
}
void check()
{
	int num;
	printf("enter the num\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("num is even\n");
	else 
	printf("num is odd\n");
}
