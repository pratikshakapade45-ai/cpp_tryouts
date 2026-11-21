#include<stdio.h>
int area();
void main()
{ int ans,perimeter,breadth,length;
  ans=area();
  perimeter=2*(ans);
printf("the area of reactangle is %d\n",ans);	
printf("the perimeter of rectangle is %d",perimeter);
}
int area()
{
int length,breadth,area,perimeter;
printf("enter the length of rectangle\n");
scanf("%d",&length);
printf("enter the breadth of rectangle\n");
scanf("%d",&breadth);
area=length*breadth;
return area;
}
