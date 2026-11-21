#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enetr the three num\n");
	scanf("%d %d %d",&a,&b,&c);
	a>b?(a>c?printf("%d is greater\n",a):printf("%d is grater",c)):(b>c?printf("%d is graeter\n",b):printf("%d is greater",c));
	}
