#include<stdio.h>
void main()
{
	int i;
	int roll[5];
	printf("Enter any 5 roll no of students\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&roll[i]);
	}
	printf("the 5 roll no are:\n");
    for(i=0;i<5;i++)
	{
		printf("%d\n",roll[i]);
	}
}

