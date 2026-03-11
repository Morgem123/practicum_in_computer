#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,j,k=1,total=0;
	printf("Please input a number:");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=0;
				break;
			}
		}	
	
		if(k!=0&&j==i)
		{
			printf("%d ",i);
			total++;
		}
		
		k=1;
	}
	printf("\nTotal is %d",total);
	
	return 0;
}
