#include<stdio.h>
void main()
{
	int i,j;
	int arr[3][3];
	arr[0][0]=11;
	arr[0][1]=22;
	arr[0][2]=33;
	arr[1][0]=44;
	arr[1][1]=55;
	arr[1][2]=66;
	arr[2][0]=77;
	arr[2][1]=88;
	arr[2][2]=99;
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t%d",arr[i][j]);
		}
	}
	
	
	
	
	
}
