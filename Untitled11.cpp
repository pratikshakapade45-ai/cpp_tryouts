#include<stdio.h>
int main ()
{
	float x;
	printf("enter the decimal number\n");
	scanf("%f",&x);
	int y;
	y=x;
	printf(" the integer part is=%d\n",y);
	float z=x-y;
	printf(" the fractional part is=%f",&z);
		return 0;
}
