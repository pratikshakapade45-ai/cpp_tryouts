#include<stdio.h>
void add();
void main()
{
	int a,b;
	printf("enter the two num for sum\n");
	scanf("%d %d",&a,&b);
	add(&a,&b);
}
void add(int *p,int *q)
{
	int z=*p+*q;
	printf("the sum of two num is %d\n",z);
}
