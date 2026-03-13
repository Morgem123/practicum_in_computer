#include<stdio.h>
#include<string.h>

int fact(int n)
{
	int i,product=1;
	
	for(i=2;i<=n;i++)
	{
		product=product*i;
	}
	return product;
}

int main()
{
	char input[13],ch[12];
	int num[12],i,j,count=0,len,total;
	
	printf("Please input a string:");
	scanf("%s",input);
	len=strlen(input);
	
	for(i=0;i<len;i++)
	{
		for(j=0;j<count;j++)
		{
			if(input[i]==ch[j])
			{
				num[j]++;
				break;
			}
		}
		if(j>=count)
		{
			ch[count]=input[i];
			num[count]=1;
			count++;
		}
		
	}
	total=fact(len);
	for(i=0;i<count;i++)
		total=total/fact(num[i]);
	printf("The number of permutations is %d",total);
	return 0;
}
