#include<stdio.h>
void main()
{
	int num,sum=0,remainder,temp;
	printf("enter the three digit num\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	remainder=num%10;
	sum=sum+remainder;
    num=num/10;
	}
	printf("the sum of the three digit numbers is=%d",sum);
	 int reverse=0;
	 while(temp!=0)
	 {
	remainder=temp%10;
	reverse=reverse*10+remainder;
    temp=temp/10;
	}
	printf("\nthe reverse numbers is=%d",reverse);
}
