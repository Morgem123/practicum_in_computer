#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int num,i,j,k;
	printf("Please input a number:");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{

		for(j=1;j<=num-i;j++)
		printf(" ");
		for(k=1;k<=2*i-1;k++)
		{
			
			printf("%d",i%10);

		}
		printf("\n");
	}
	return 0;
}


