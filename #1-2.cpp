#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;

	printf("Please input a positive intrger:");
	scanf("%d",&a);
	if(a<0)
		printf("%d is not a positive integer!!\n",a); 
	else
	{	if(1<=a,a<=9)
		printf("%d is a small integer.\n",a);
	else
		if(10<=a,a<=99)
		printf("%d的十位數為%d\n%d的個位數為%d",a,a/10,a,a%10);
	else	
		if(a>=100,a%5==0)
		printf("%d is a large integer.\n%d is a divisible by 5.",a,a);
	else
		if(a>=100,a%5==1)
		printf("%d is a large integer.\n%d+5=%d",a,a,a+5);
	else
		if(a>=100,a%5==2)
		printf("%d is a large integer.\n%d-5=%d",a,a,a-5);
	else
		if(a>=100,a%5==3)
		printf("%d is a large integer.\n%d*5=%d",a,a,a*5);
	else
		if(a>=100,a%5==4)
		printf("%d is a large integer.\n%d/5=%2.2f",a,a,(float)a/5);
    }
	return 0;	
}
