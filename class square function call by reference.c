#include<stdio.h>
void square();
void main()
{
	int a;
	printf("enetr any num to do its square\n");
	scanf("%d",&a);
	square(&a);
}
void square(int *p)
{
   int z=*p**p;
   printf("the square of given num is %d",z);
	
}
