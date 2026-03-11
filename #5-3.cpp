#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,sum,a,i,count=0;
	printf("Please input a number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum=0;
		for(a=1;a<i;a++)
		if(i%a==0)
		sum=sum+a;
		if(sum==i)
		{
			printf("%d,",i);
			count++;
		}
	}
	printf("\nThere are %d perfect numbers!!",count);
	return 0;
}

	
