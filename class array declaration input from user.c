#include<stdio.h>
void main()
{
	int i,j;
	int arr[3][3];
	printf("enter the elements in matrix:\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			printf("\n");
			scanf("%d",&arr[i][j]);
	}
}	
printf("the matrix is:\n");
for(i=0;i<3;i++)
{
	printf("\n");
for(j=0;j<3;j++)
	{
			printf("\t%d",arr[i][j]);
		}
	}
} 
