#include<stdio.h>
void sub();
void main()
{
	int a,b;
	printf("enter any two  num for substraction\n");
	scanf("%d %d",&a,&b);
	sub(&a,&b);
}
void sub(int *p,int *q)
{
	int z=*p-*q;
	printf("the sub of two num is %d",z);
}

