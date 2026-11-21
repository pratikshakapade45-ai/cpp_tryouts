#include<stdio.h>
#include<string.h>
union student
{
	int roll;
	char name[20];
	float marks;
};
void main()
{
	union student s1;
	s1.roll=10;
	strcpy(s1.name,"jay");
	s1.marks=85.60;
	printf("%d",s1.roll);
	printf("%.2f",s1.marks);
	printf("%s",s1.name);
}
