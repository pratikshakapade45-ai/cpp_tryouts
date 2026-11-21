#include<stdio.h>
#include<string.h>
struct employe
{
	int id,salary,age;
	char name[20];
};
void main()
{
   struct employe emp;
	emp.id=10;
	strcpy(emp.name,"shruti");
    emp.age=30;
    emp.salary=40000;
	printf("employe id  no is %d\n",emp.id);
		printf("\n");
	printf("employe name is %s \n",emp.name);
		printf("\n");
	printf("employe age is %d\n",emp.age);
		printf("\n");
	printf("employe salary is %d\n",emp.salary);
	}
