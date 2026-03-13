#include<stdio.h>
#include<string.h>

int fact(int n)
{
	if(n==1)
	return 1;
	
	else
	return n*fact(n-1);
}
int main()
{
	char input[13]={};
	int len=0,letter=0,now=0,dtemp=0,i=0,power;
	long long int deno,nume=0;
	
	printf("Please input a string: ");
	scanf("%s",input);	
	len = strlen(input);
	
	for( dtemp = 1, deno = 1;dtemp <= len; dtemp++)
	{
		if(dtemp == 1)
		deno = 1;
		else if(dtemp > 1)
		deno = dtemp * deno;
	}

	for(i = 0; i < 26; i++)
	{
		for(now = 0; now < len ; now++)
		{
			if((input[now] - 97 ) == i)
			nume++;
		}	

		if(nume == 0)
		nume = 1;
		power = fact(nume);	
		deno = deno/power;
		nume = 0;
	}	

	for(i = 0; i < 26; i++)
	{
		for(now = 0; now < len ; now++)
		{
			if((input[now] - 65 ) == i)
			nume++;
		}

		if(nume == 0)
		nume = 1;
	
		deno = deno/nume;
		nume = 0;
	}

	for(i = 0; i < 10; i++)
	{
		for(now = 0; now < len ; now++)
		{
			if((input[now] - 48 ) == i)
			nume++;
		}

		if(nume == 0)
		nume = 1;
		power = fact(nume);
		deno = deno/power;
		nume = 0;
	}


	printf("The number of permutations is %lld",deno);

	return 0;
} 

