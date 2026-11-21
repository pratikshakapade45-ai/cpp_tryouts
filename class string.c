#include<stdio.h>
void main()
{
	int i;
	char name[12]="pratiksha";
	for(i=0;i<12;i++)
	if(name[i]=='\0')
	{
		printf("\nnull");
	}
	else
	printf("%c",name[i]);
}
