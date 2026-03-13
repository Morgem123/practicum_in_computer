#include<stdio.h>
#include<string.h>

int main()
{
	int digit[100],n,i=-1,j,power=1,sum=0,len;
	char input[101];
	
	printf("Please input a decimal number: ");
	scanf("%d%*c",&n);
	
	while(n>=1)
	{
		i++;
		digit[i]=n%2;
		n=n/2;
	}
	
	for(j=i;j>=0;j--)
	{
		printf("%d",digit[j]);	
	}
	
	printf("\nPlease input a binary number: ");
	scanf("%s",input);
	len=strlen(input);
	
	for(i=len-1;i>=0;i--)
	{
		if(input[i]=='1')
			{
				sum=sum+power;
			}
		power=power*2;	
	} 
	printf("%d\n",sum);
	return 0;
}

