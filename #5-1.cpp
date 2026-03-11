#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum,i;
	printf("長方形長*寬:");
	scanf("%d*%d",&a,&b);
	int sum1=a*b;
		while(b!=0)
	{
		sum=a%b;
		a=b;
		b=sum;
	}
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("正方形邊長:%d 個數:%d\n",i,sum1/i/i);
	}
	return 0;
}
