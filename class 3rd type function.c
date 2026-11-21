#include<stdio.h>
void add(int,int);
void main()
{
int a,b;
printf("enter the two num for sum\n");
scanf("%d %d",&a,&b);
add(a,b);
add(5,2);		
}
void add(int p,int q)
{
	int c=p+q;
printf("the sum will be %d\n",c);

}
