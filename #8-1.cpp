#include<stdio.h>
#include<string.h>

int main()
{
	int mat[9],i,j,k,l=0,m,len,time,sum=0;
	int strr[300];
	char str[300]={};
	char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	printf("Please input a 3x3 key matrix(9 integers):");
	for(i=0;i<9;i++)
	{
		scanf("%d",&mat[i]);
	}
	printf("Please input a string:");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		strr[i]=(int)str[i]-(int)'A';
	}
	
	time=len/3;
	
	for(i=0;i<time;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				sum+=mat[k+j*3]*strr[k+i*3];
			}
			m=sum%26;
			str[l]=ch[m];
			l++;
			sum=0;
		}
	}
	printf("The chiper is ");
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}

	return 0;
}


