#include<stdio.h>
void main()
{
	int a,b,d;
	char c;
	printf("enter a two num for operations\n");
	scanf("%d %d",&a,&b);
	printf("enter any one of  + addition\n\t- substraction\n\t* multiplication\n\t/ division");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':
			d=a+b;
			printf("addition of %d and %d is %d",a,b,d);
			break;
		case '-':
			d=a-b;
			printf("sub of %d and %d is %d",a,b,d);
			break;
		case '*':
			d=a*b;
			printf("mult of %d and %d is %d",a,b,d);
			break;
		case '/':
			d=a/b;
			printf("div of %d and %d is %d",a,b,d);
			break;
		default :
			printf("enter a valid symbol for operations\n");
			
		
		
	}
	
	
	
}
