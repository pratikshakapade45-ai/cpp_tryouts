#include<stdio.h>
int main()
{
int num;
 printf("enter the number\n");//
scanf("%d",&num);//
if(num>99 && num<1000)//
printf("it is a three digit number\n");//
else//
printf("it is not a three digit number\n");//



printf("enter the number\n");
scanf("%d",&num);
if(num%5 && num%3)
printf("it is a number divisible by 3 or 4\n");
else
printf("it is a number not divisible by 3or 4\n");
return 0;
}
