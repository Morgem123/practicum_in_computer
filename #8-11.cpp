#include<stdio.h>
#include<string.h>

int main()
{
	char input[100],ch;
	int key [3][3],len,i,j,k,sum;
		
	printf("Please input a 3x3 key matrix(9 integers):");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&key[i][j]);
		}
	}
	printf("Please input a string: ");
	scanf("%*c%s",input);
	printf("The chiper is ");
	len=strlen(input);
	
	for(i=0;i<=len-1;i=i+3)
	{
		for(j=0;j<=2;j++)
		{
			sum=0;
			for(k=0;k<=2;k++)
			{
				sum=sum+key[j][k]*((int)input[i+k]-(int)'A');
			}
			
				sum=sum%26;
				ch=(char)((int)'A'+sum);
				printf("%c",ch);			
		}
	}
	return 0;
} 
 
