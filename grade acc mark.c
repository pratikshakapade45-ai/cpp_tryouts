#include<stdio.h>
int main()
{	int per;
	printf("enter the percentage\n");
	scanf("%d",&per);
	if (per<100 && per>=91)
	printf("excellent\n");
		if (per<90 && per>=81)
	printf("very good\n");
		if (per<80 && per>=71)
	printf("good\n");
		if (per<70 && per>=61)
	printf("can do better\n");
		if (per<60 && per>=51)
	printf("average\n");
		if (per<50 && per>=41)
	printf("below average\n");
	
 	if (per<=40)
	printf("fail\n");
return 0;
}

/*if(per>90)
printf("a grade\n");
else if(per>80)
printf("b grade\n");
else if(per>70)
printf("c grade\n");
else if(per>60)
printf("d grade\n");
else if(per>50)
printf("a grade\n");
else(per>=40)
;printf("fail\n");*/


