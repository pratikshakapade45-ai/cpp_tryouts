#include<stdio.h>
#include<string.h>
struct car
{
	int no;
	char name[20];
};
void main()
{
	int i;
	struct car c[5];
	for(i=0;i<5;i++)
	{
		printf("enter the car %d details\n",i+1);
		printf("enter the car no\n");
		scanf("%d",&c[i].no);
		printf("\n");
		printf("enetr the car name\n");
		scanf("%s",&c[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("the no of car is %d\n",c[i].no);
		printf("the name of car is %s\n",c[i].name);
	}
}
