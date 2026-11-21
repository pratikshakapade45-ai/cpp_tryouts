#include<stdio.h>
void sum();
void main()
{
	sum();	
}
void sum()
{
	int num,sum=0,remainder,temp;
	printf("enter the num for sum of its digit num\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		remainder=num%10;
		sum=sum+remainder;
		num=num/10;
	}
	printf("\nthe sum of three digit num is %d",sum);
	
}
