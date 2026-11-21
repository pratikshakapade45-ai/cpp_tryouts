#include<stdio.h>
int main()
{
	int per;
	printf("enter the percentage\n");
	scanf("%d\n",&per);
	if (100>per>91)
	printf("excellent\n");
		if (90<per>81)
	printf("very good\n");
		if (80<per>71)
	printf("good\n");
		if (70<per>61)
	printf("can do better\n");
		if (60<per>51)
	printf("average\n");
		if (50<per>41)
	printf("below average\n");
	
		if (per<40)
	printf("fail\n");
	return 0;
}
