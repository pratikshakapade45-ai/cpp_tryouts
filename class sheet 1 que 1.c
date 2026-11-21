#include<stdio.h>
void main()
{
	float fahreneit,celcius;
	printf("enter the temp in degree celcius\n");	
	scanf("%f",&celcius);
	fahreneit=(celcius*9/5)+32;
	printf("the temp in degree fahreneit is %f",fahreneit);
}
