#include<stdio.h>
void check(int);
void main()
{
	int num,even,odd;
	printf("enter the num\n");
	scanf("%d",&num);
	check(num);
}
void check(int x)
{

	if(x%2==0)
	printf("num is even\n");
	else 
   printf("num is odd\n");
}
