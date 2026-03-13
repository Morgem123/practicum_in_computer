#include<stdio.h>

int main()
{
	int n,c1=0,c2=0,c3=0,c4=0,m;
	printf("請輸入乘客人數:");
	scanf("%d",&n);
	while(n>17&&n!=25&&n!=26)
	{
	 	n-=16;
		c4++;
		
		if(n>0&&n<=4)
		{
	 		c1=1;
	 	}
	 	else if(n>=5&&n<=7)
	 	{
			c2=1;
		}	
		 else if(n==8)
	 	{
		 	c1=2;
		}
		else if(n>=9&&n<=11)
	 	{
		 	c1=1;
			c2=1;
		}	
	 	else if(n>=12&&n<=13)
	 	{
			c3=1;
		}
	 	else if(n>=14&&n<=16)
	 	{
			c4=1;
		}
	 	else if(n==17)
	 	{
		 	c1=1;c3=1;
		}  	
	}
	if(n==25||n==26)
	{
		c3=2;
	}
	
	m=c1*2500+c2*3800+c3*6400+c4*7500;
	printf("最少需要%d元\n",m);
	printf("四門房車%d台\n",c1); 
	printf("商務休旅車%d台\n",c2);
	printf("小型巴士%d台\n",c3);
	printf("中型巴士%d台\n",c4); 
	
	
	
	
return 0;	
 } 
