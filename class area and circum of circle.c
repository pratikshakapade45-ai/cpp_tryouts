#include<stdio.h>
int main()
{
/*	float area,pi,radius;
	pi=3.14;
	printf("enter the radius of circle\n");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of circle is %f",area);*/
		
	float area,length,breadth,perimeter;
	printf("enter the length of rectangle\n");
	scanf("%f",&length);
	printf("enter the breadth of rectangle\n");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("the area of rectangle is %f\n",area);
	perimeter=2*(length+breadth);
	printf("the perimeter of rectangle is %f\n",perimeter);
	
	
	return 0;
	
	
	
}
