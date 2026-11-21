#include<stdio.h>
void add();
void sub();
void main()
{
	add();
	sub();	
	printf("\nthe program ends here....thanku");

}
void add()
{
	int a,b,c;
	printf("\nenter the two num for sum\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("the addition of two num is %d",c);	
}
void sub()
{
	int a,b,d;
	printf("\nenter the two num for sub\n");
	scanf("%d %d",&a,&b);
	d=a-b;
	printf("the substraction of two num is %d",d);	
}
