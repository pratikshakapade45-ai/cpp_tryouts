#include<stdio.h>
int main ()
{
	int x,y;
	printf("enter the coordinates\n");
	scanf("%d %d",&x,&y);
	if (x==0 && y==0)
	{
		printf("lies on origin\n");
	}
	else if(x==0)
	{
		printf("lies on y axis\n");
	}
	else if(y==0)
	{
		printf("lies on x axis\n");
	}
	else 
	{
		printf("does not lies on x or y axis \n");
	}
	
	
	return 0;
}
