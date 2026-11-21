#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the num\n");
	scanf("%d",&a);
		printf("enter the num\n");
	scanf("%d",&b);
		printf("enter the num\n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is greater\n",a);
		else
			printf("%d is greater\n",c);
	}
	else
	{
		if(b>c)
			printf("%d is greater\n",b);
			else
				printf("%d is greater\n",c);
	}
}
