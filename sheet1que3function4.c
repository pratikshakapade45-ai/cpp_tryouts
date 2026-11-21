#include<stdio.h>
int sum(int x);
void main()
{
	int num;
	printf("enter the num for sum of its digit num\n");
	scanf("%d",&num);
    int ans=sum(num);
	printf("the sum of the digit is %d\n",ans);	
}
int sum(int x)
{
 int sum=0,remainder;
	while(x!=0)
	{
		remainder=x%10;
		sum=sum+remainder;
		x=x/10;
	}
return sum;
}
