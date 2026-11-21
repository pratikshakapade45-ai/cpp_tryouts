#include<stdio.h>
int temp(int);
int main()
{
	int temperature,ans;
	printf("enter the temp in degree celcius\n");
	scanf("%d",&temperature);
    ans=temp(temperature);
    printf("the temp in degree fahreneit is %d",ans);
}
int temp(int temp)
{
	int ans;
	ans=(temp*9/5)+32;
	return ans;
}
