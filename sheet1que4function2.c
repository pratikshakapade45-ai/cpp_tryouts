#include<stdio.h>
int check();
void main()
{
	int num;
	if (check(num)==1)
	printf("num is even\n");
	else
	printf("num is odd");
}
int check()
{
	int num;
	printf("enter the num\n");
	scanf("%d",&num);
	if(num%2==0)
	return 1;
	else 
   return 0;
}
