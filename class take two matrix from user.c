#include<stdio.h>
void main()
{
	int i,j;
	int arr1[3][3],arr2[3][3],rows,columns;
	printf("enter the no of rows:\n ");
	scanf("%d",&rows);
	printf("enter the no of columns:\n ");
	scanf("%d",&columns);
	printf("enter the elements in first matrix:\n");
		for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
		{
			printf("\n");
			scanf("%d",&arr1[i][j]);
	}
}	
printf("the first matrix is:\n");
for(i=0;i<rows;i++)
{
	printf("\n");
for(j=0;j<columns;j++)
	{
			printf("\t%d",arr1[i][j]);
		}
	}
printf("\nenter the elements in second matrix:\n");
		for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
		{
			printf("\n");
			scanf("%d",&arr2[i][j]);
	}
}	
printf("the second matrix is:\n");
for(i=0;i<rows;i++)
{
	printf("\n");
for(j=0;j<columns;j++)
	{
			printf("\t%d",arr2[i][j]);
		}
	}
} 
