#include<stdio.h>
typedef struct student
{
	int roll;
	char name[20];
}student;
student
storedata (student);
void display(student);
void main()
{
	student s1,s2,s3;
	s1=storedata(s1);
	s2=storedata(s2);
	s3=storedata(s3);
	
	display(s1);
	display(s2);
	display(s3);
}
student storedata(student s)
{
	printf("enter the roll no\n");
	scanf("%d",&s.roll);
	printf("enter the name\n");
	scanf("%s",&s.name);
	return s;
}
void display(student s)
{
	printf("\n");
	printf("roll no is %d\n",s.roll);
	printf("name is %s\n",s.name);
}
