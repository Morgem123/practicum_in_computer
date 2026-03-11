#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,a,b,c,d,e,f,total=0;
	printf("Please input a number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(10<=i&&99>=i)
		{
			a=i%10;
			b=i/10;
			if((a*a+2*a*b+b*b)==i)
			{
			printf("%d ",i);
			total++;
			}
		}
		if(1000<=i&&9999>=i)
		{
			c=i%100;
			d=i/100;
			if((c*c+2*c*d+d*d)==i)
			{
				printf("%d ",i);
				total++;
			}
		}
		
		if(100000<=i&&999999>=i)
		{
			e=i%1000;
			f=i/1000;
			if((e*e+2*e*f+f*f)==i)
			{
				printf("%d ",i);
				total++;
			}
		}
	}
		printf("\nTotal is %d",total);
		
	
	return 0;	
		
		
		
		
		
	}
