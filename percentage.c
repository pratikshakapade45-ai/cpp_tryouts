#include<stdio.h>
int main()
{
	float physics,chemistry,maths,biology,percentage;
	printf("enter the marks for physics\n");
	scanf("%f",&physics);
	printf("enter the marks for chemistry\n");
	scanf("%f",&chemistry);
	printf("enter the marks of maths\n");
	scanf("%f",&maths);
	printf("enter the marks of biology\n");
	scanf("%f",&biology);
	percentage=(physics+chemistry+maths+biology)/4;
	printf("the percentage is %f",percentage);
	return 0;
	}

