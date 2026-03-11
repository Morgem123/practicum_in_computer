#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,i,j;
	printf("Please input the size of matrix:");
	scanf("%d",&size);
	
	int matrix1[size][size],matrix2[size][size];
	printf("Please input matrix1:");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		scanf("%d",&matrix1[i][j]);
	}

	printf("Please input matrix2:");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		scanf("%d",&matrix2[i][j]);
	}
	 
	printf("matri1*matri2\n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		printf("%d ",matrix1[i][0]*matrix2[0][j]+matrix1[i][1]*matrix2[1][j]+matrix1[i][2]*matrix2[2][j]+matrix1[i][3]*matrix2[3][j]+matrix1[i][4]*matrix2[4][j]);
		printf("\n");
	}
	
	return 0;
}
