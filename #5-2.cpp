#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i1,i2,i3,i4,k,j,total;
	printf("Please input a number:");
	scanf("%d",&num);
	
	for(i1=2,i2=3,i3=4,i4=5;i4<=num;i1++,i2++,i3++,i4++)
	{
		k=0;
		for(j=2;j<i1;j++)
		{
			if(i1%j==0)
			{
				k++;
				break;
			}
		}
		for(j=2;j<i2;j++)
		{
			if(i2%j==0)
			{
				k++;
				break;
			}
		}
		for(j=2;j<i3;j++)
		{
			if(i3%j==0)
			{
				k++;
				break;
			}
		}
		for(j=2;j<i4;j++)
		{
			if(i4%j==0)
			{
				k++;
				break;
			}
		}
	
		if(k==4)
		{
			printf("(%d,%d,%d,%d)",i1,i2,i3,i4);
			total++;
		}
	}
			printf("\nTotal is %d",total);
		
	
	return 0;
}
	
	
	
