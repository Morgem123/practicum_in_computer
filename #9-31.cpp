#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num,a,b,c,d,sum;
	int big=0,small=100000;
	printf("請輸入乘客總人數");
	scanf("%d",&num);
	
	for(a=0;a<=10;a++)
	{
		for(b=0;b<=10;b++)
		{
			for(c=0;c<=10;c++)
			{
				for(d=0;d<=10;d++)
				{
					if(4*a+7*b+13*c+16*d>=num)
					{
						sum=a*2500+b*3800+c*6400+d*7500;	
					
						if(small>sum)
						small=sum;									
					}
					
				}
			}
		} 
	}
	printf("最少需要%d元",small);	
	return 0;	
} 
