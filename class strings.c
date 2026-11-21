#include<stdio.h>
void main()
{
	int i;
	char n[12]="pratiksha";
	for(i=0;i<12;i++)
	{
		if (n[i]=='\0')
		printf("\nnull");
		else
		printf("%c",n[i]);
	}
}
