#include<stdio.h>
int main()
{
	int l,b;
	printf("enter the length\n");
	scanf("%d",&l);
	printf("enter the breadth\n");
	scanf("%d",&b);
	int a=l*b;
	int p=2*(l+b);
	
	if(a>p)
	{
   printf("area is graeter than perimeter\n");	
}
	else
	{
	 printf("perimter is graeter than area\n");	
}
	return 0;
}
