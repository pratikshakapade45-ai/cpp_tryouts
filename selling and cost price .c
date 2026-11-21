#include<stdio.h>
int main()
{
	int sp,cp,c;
	printf("enter the selling price\n");
	scanf("%d",&sp);
	printf("enter the cost price\n");
	scanf("%d",&cp);
	if(sp>cp)
	{
	printf("you have a profit\n");
}
else if(sp<cp)
{
printf("you have  loss\n");
}
else
{
	printf("you have no loss no profit\n");
}
	return 0;
}
