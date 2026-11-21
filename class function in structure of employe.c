#include<stdio.h>
typedef struct employe
{
	int id;
	char name[20];
	int salary;
}employe;
employe
 storedata(employe);
void display(employe);
void main()
 {
 	employe e1;
 	e1=storedata(e1);
 	display(e1);
 }
 employe storedata(employe e1)
 {
 	printf("enter the id of employe\n");
 	scanf("%d",&e1.id);
 	printf("enter the name of employe\n");
 	scanf("%s",&e1.name);
 	printf("enter the salary of employe\n");
 	scanf("%d",&e1.salary);
 }
 void display( employe e1)
 {
 	printf("\n");
 	printf("the id of employe is %d\n",e1.id);
 	printf("the name of employe is %s\n",e1.name);
 	printf("the salary of employe is %d\n",e1.salary);
 }
