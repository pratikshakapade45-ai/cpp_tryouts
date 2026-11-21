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
	s1.marks=85.60;
	strcpy(s1.name,"jay");
	printf("%d\n",s1.roll);
	printf("%.2f\n",s1.marks);
	printf("%s\n",s1.name);
}
