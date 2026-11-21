#include<stdio.h>
void main()
{
	int i;
	char name[9];
	printf("enter the name\n");
	scanf("%s",&name[i]);
	for(i=0;i<9;i++)
	if(name[i]=='\0')
	{
		printf("\nnull");
	}
	else
	printf("%c",name[i]);
}
