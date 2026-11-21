#include<stdio.h>
void swap();
void main()
{
	int a,b;
	printf("enetr any two nu for swapping\n");
	scanf("%d %d",&a,&b);
	printf("\nvalues before swapping are %d %d",a,b);
	swap(&a,&b);
	
}
void swap(int *p,int *q)
{
	int z;
	z=*p;
	*p=*q;
	*q=z;
	printf("\nvalues after swapping are %d %d",*p,*q);
}
