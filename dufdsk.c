#include<stdio.h>
void add(int,int);
void main()
{
int a,b;
add(a,b);
add(5,2);		
}
void add(int p,int q)
{ int a,b,c;
	printf("enter the two num for sum\n");
scanf("%d %d",&a,&b);
	c=a+b;
printf("the sum will be %d\n",c);

}
