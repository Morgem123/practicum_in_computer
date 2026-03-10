#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,s,num;
	
	printf("Please input a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(s=n;s>i;s--)
		{ 
			printf(" ");
		}	
		for(num=1;num<=i;num++)
		{ 
			printf("%d",num%10);
		}		 
		for(num=i-1;num>0;num--)
		{ 
			printf("%d",num%10);
		} 
		printf("\n");
		 
	}
	
	
	return 0;
} 
