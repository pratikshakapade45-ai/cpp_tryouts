#include<stdio.h>
void mult();
void main()
{
int a,b;
printf("enetr any two num for mult\n");
scanf("%d %d",&a,&b);
mult(&a,&b);
}
void mult(int *p,int *q)
{
	int z=*p**q;
	printf("multiplication of two num is %d\n",z);
}
