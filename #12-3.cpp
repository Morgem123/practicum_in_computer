#include<stdio.h>

int main()
{
	int num,i;
	printf("Please input a number n(0<n<1000000000):");
	scanf("%d",&num);
	printf("%d=",num);
	for(i=2;i<=num;i++)
	{
		while(num!=i)
		{
			if(num%i==0)
			{
				printf("%d*",i);
				num=num/i;
			}
			else		
			break;
		}
	} 
	printf("%d\n",num);
	
	return 0;
} 
