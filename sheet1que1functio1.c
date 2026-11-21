#include<stdio.h>
void temp();
void main()
{
	temp();	
}
void temp()
{
	int temp,ans;
	printf("enter the temp in degree celcius\n");
	scanf("%d",&temp);
	ans=(temp*9/5)+32;
	printf("the temp in degree fahreneit is %d",ans);
	
}
