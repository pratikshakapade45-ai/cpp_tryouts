#include<stdio.h>
#include<string.h>
void main()
{
	char name[12]="pratiksha";
	strlwr(name);
	printf(name);
	
	printf("\n");
	
	strupr(name);
	printf(name);
	
	printf("\n");
	
	strrev(name);
	printf(name);
	
	printf("\n");
	
	strlen(name);
	printf("%d",strlen(name));
	
}
