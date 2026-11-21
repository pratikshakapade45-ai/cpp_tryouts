#include<stdio.h>
int add();
int sub();
int mult();
int div();
void main()
{
int ans1,ans2,ans3,ans4;	
ans1=add();	
printf("the sum will be %d\n",ans1);	
ans2=add();	
printf("the sub will be %d\n",ans2);	
ans3=add();	
printf("the mult will be %d\n",ans3);	
ans4=add();	
printf("the div will be %d\n",ans4);	
		
}
int add()
{
	int a,b,c;
	printf("enter the two num for sum\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	printf("enter the two num for sub\n");
	scanf("%d %d",&a,&b);
	c=a-b;
	return c;
	
}
int mult()
{
	int a,b,c;
	printf("enter the two num for mult\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	return c;
	
}
int div()
{
	int a,b,c;
	printf("enter the two num for div\n");
	scanf("%d %d",&a,&b);
	c=a/b;
	return c;
	
}
