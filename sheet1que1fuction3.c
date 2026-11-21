#include<stdio.h>
void temp(int x);
void main()
{
	int temperature;
	printf("enter the temp in degree celcius\n");
	scanf("%d",&temperture);
     temp(temperature);
}
void temp(int temp)
{
	int ans;
	ans=(temp*9/5)+32;
	printf("the temp in degree fahreneit is %d",ans);
}
