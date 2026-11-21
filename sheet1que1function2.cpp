#include<stdio.h>
int temp();
int main()
{
	int ans;
    ans=temp();	
	printf("the temp in degree fahreneit is %d",ans);
}
int temp()
{
	int temp,ans;
	printf("enter the temp in degree celcius\n");
	scanf("%d",&temp);
	ans=(temp*9/5)+32;
	return ans;
	
}
