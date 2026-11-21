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
}

