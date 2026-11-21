#include<stdio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
};
void main()
{
	struct student s1,s2,s3,s4,s5;
	s1.roll=10;
	strcpy(s1.name,"shruti");
	s2.roll=20;
	strcpy(s2.name,"saloni");
	s3.roll=30;
	strcpy(s3.name,"sahil");
	s4.roll=40;
	strcpy(s4.name,"samruddhi");
	s5.roll=50;
	strcpy(s5.name,"samaira");
	printf(" s1 roll no is %d\n",s1.roll);
	printf(" s1 roll no is %d\n",s2.roll);
	printf(" s1 roll no is %d\n",s3.roll);
	printf(" s1 roll no is %d\n",s4.roll);
	printf(" s1 roll no is %d\n",s5.roll);
	printf("\n");
	printf("s1 name is %s\n",s1.name);
	printf("s2 name is %s\n",s2.name);
	printf("s3 name is %s\n",s3.name);
	printf("s4 name is %s\n",s4.name);
	printf("s5 name is %s\n",s5.name);
	}
