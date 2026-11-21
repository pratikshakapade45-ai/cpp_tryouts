#include<stdio.h>

int area(int length, int breadth);

int main()
{
    int length, breadth,ans,perimeter;
    printf("Enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);
    ans = area(length,breadth);
     perimeter = 2 * (length+breadth);
    printf("The perimeter of the rectangle is: %d\n",perimeter);
}

int area(int length, int breadth)
{
    int area;
    area = length * breadth;
    printf("The area of the rectangle is: %d\n",area);
    
}
