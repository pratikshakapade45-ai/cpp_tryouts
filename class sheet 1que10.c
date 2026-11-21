#include<stdio.h>
int main()
{
	float price,yes,no;
	printf("enter a price\n");
	scanf("%f",&price);
	char is_student;
	printf("are you a student?(yes/no)\n");
	scanf("%c",&is_student);
	float discount=0;
	if(is_student==yes||is_student==no)
	{
		if(price>500)
	{
		discount=0.20;
	}
		else{
			if(price>600)
			{
				discount=0.15;
			}
		}
		
		float discounted_price=price-(price*discount);
		
		printf("original price:%2f\n",price);
		
	}
	

	
	
	return 0;
}
