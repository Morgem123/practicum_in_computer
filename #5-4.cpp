#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i1,i2,i3,i4,a,b,j1,j2,j3,j4,check,count,x;
	while(i1==i2||i1==i3||i1==i4||i2==i3||i3==i4||i2==i4)
	{
		srand(time(NULL));
		n=rand()%10000;
		i1=n/1000;
		i2=n/100%10;
		i3=n/10%10;
		i4=n%10;
	}
	for(count=0,check=0;check!=1;count++)
	{
		a=0;
		b=0;
		printf("Please input four digit(0~9):");
		scanf("%d",&x);
		j1=x/1000;
		j2=x/100%10;
		j3=x/10%10;
		j4=x%10;
	if(j1==i1)
	a++;
	else if(j1==i2||j1==i3||j1==i4)
	b++;
	if(j2==i2)
	a++;
	else if(j2==i1||j2==i3||j2==i4)
	b++;
	if(j3==i3)
	a++;
	else if(j3==i1||j3==i2||j3==i4)
	b++;
	if(j4==i4)
	a++;
	else if(j4==i1||j4==i3||j4==i2)
	b++;
	
	if(a==4)
	break;
	
	printf("The result is %dA %dB\n",a,b);
	a=0;
	b=0;
	}
	printf("You got it!!%d times!!",count+1);
	
	return 0;
}
	
	
