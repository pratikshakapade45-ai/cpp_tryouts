#include<stdio.h>
void main()
{
	int num,digit,reverse=0;
	printf("enter the num\n");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;	
	}
	{
		printf("the reverse of given number is %d",reverse);	
		}
}
