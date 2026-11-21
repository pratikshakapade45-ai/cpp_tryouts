#include<stdio.h>
void main()
{
	float basicsalary;
	float da,ta,hra,totalsalary;
	printf("enetr the basic salary\n");
	scanf("%f",&basicsalary);
	if(basicsalary<=5000)
	{
		da=0.10*basicsalary;
		ta=0.15*basicsalary;
		hra=0.25*basicsalary;
	}
	else
	{
		da=0.15*basicsalary;
		ta=0.20*basicsalary;
		hra=0.30*basicsalary;	
	}
	totalsalary=da+ta+hra;
	{
		printf("total salary will be %2f",totalsalary);
	}	
}
