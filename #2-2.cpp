#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int num,in,i,sum=0;
	int big=0,small=999999999;
	float ava;
	printf("Please input the number of integers:");
	scanf("%d%*c",&num);
	for(in=1;in<=num;in++)
	{

		{	
			printf("Interger#%d.....",in);
			scanf("%d",&i);
		}
		sum=sum+i;
		ava=(float)sum/num;
		
		if(i>big)
		big=i;
		if(small>i)
		small=i;
	}
	printf("The average is %.2f\n",ava);
	printf("The maximum is %d\n",big);
	printf("The minimum is %d\n",small);
	
	return 0;
}
	
