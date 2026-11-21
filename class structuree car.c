#include<stdio.h>
#include<string.h>
struct car
{
	int no;
	char name[20];
};
void main()
{
	struct car c[3];
	c[0].no=1131;
	strcpy(c[0].name,"mahindra thar\n");
	c[1].no=6531;
	strcpy(c[1].name,"toyata fortuner");
	c[2].no=4561;
	strcpy(c[2].name,"volvo");
	printf("\n");
	printf("the no of car is %d\n",c[0].no);
	printf("the name of car is %s\n",c[0].name);
	printf("the no of car is %d\n",c[1].no);
	printf("the name of car is %s\n",c[1].name);
	printf("the no of car is %d\n",c[2].no);
	printf("the name of car is %s\n",c[2].name);
}

