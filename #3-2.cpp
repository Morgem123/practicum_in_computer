#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p1 = 0,p2 = 1,i,n,t;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("%d %d",p1,p2);
	
	for(i=3;i<=n;i++)
	{
		printf(" %d",p1+p2);
		t = p1;
		p1 = p2;
		p2 = p1+t;
	}	
		return 0;
}
