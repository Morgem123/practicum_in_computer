#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a,b;
	printf("總數量+總腳數:");
	scanf("%d+%d",&i,&j);
	
	b=(j-2*i)/2;
	a=(4*i-j)/2;
	
	if(a<0,b<0)
	printf("無解");
	else
	printf("雞%d隻 兔子%d隻",a,b);
	return 0; 
	
}
