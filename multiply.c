#include<stdio.h>
int main()
{
int n,i;
 printf("enter the number\n");
scanf("%d",&n);
int sum=1;
for(i=1;i<=n;i++)
{
	sum=sum*i;
}
printf("%d",sum);
	return 0;
}
