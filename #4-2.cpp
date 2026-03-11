#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i1,i2,sum;
	printf("Please input two integers:");
	scanf("%d %d",&i1,&i2);
	
	while(i2!=0)
	{
		sum=i1%i2;
		i1=i2;
		i2=sum;
	}
	printf("GCD is %d",i1);
	return 0;
}
	
	
