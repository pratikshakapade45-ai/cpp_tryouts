#include<stdio.h>
int main()
/*{
	int a=10,b=20,c;
	int *p=&a;
	int *q=&b;
	c=*p+*q;
	printf("addition of two num is %d\n",c);
	return 0;
}*/
{
	int a,b,c;
	printf("enter the first num for sum\n");
	scanf("%d",&a);
	printf("enter the second num for sum\n");
	scanf("%d",&b);
	int *p=&a;
	int *q=&b;
	c=*p+*q;
	printf("sum of two num is %d\n",c);
}
