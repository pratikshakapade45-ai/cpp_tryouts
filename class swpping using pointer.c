#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	int *p=&a;
	int *q=&b;
	printf("the values before swapping are %d %d\n",a,b);
	c=*p;
	*p=*q;
	*q=c;
	printf("the values after swapping are %d %d\n",a,b);
}
