#include<stdio.h>
void area();
void main()
{
	area();	
}
void area()
{
int length,breadth,area,perimeter;
printf("enter the length of rectangle\n");
scanf("%d",&length);
printf("enter the breadth of rectangle\n");
scanf("%d",&breadth);
area=length*breadth;
printf("the area of reactangle is %d\n",area);
perimeter=2*(length+breadth);
printf("the perimeter of rectangle is %d",perimeter);
}
