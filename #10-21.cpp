#include<stdio.h>
#include<string.h>

void check_ISBN10(char *arr)
{
	int i, sum=0;
	
	for(i=0;i<9;i++)
	{
		sum = sum + (((int)*(arr+i)-(int)'0')*(10-i));
	}
	if(*(arr+9) == 'X')
	{
		sum = sum + 10;
	}
	else
	{
		sum = sum + (((int)*(arr+9))-(int)'0');
	}
	if(sum%11 == 0)
	{
		printf("The ISBN code is correct!!\n");
	}
	else
	{
		printf("The ISBN code is wrong!!\n");
	}
}

void check_ISBN13(char *arr)
{
	int i, sum=0;
	
	for(i=0;i<12;i++)
	{
		if(i%2 == 0)
		{
			sum = sum + (((int)*(arr + i)-(int)'0')*1);
		}
		if(i%2 == 1)
		{
			sum = sum + (((int)*(arr + i)-(int)'0')*3);
		}
	}
	
	if(10 - (sum%10) == ((int)*(arr + 12)-(int)'0'))
	{
		printf("The ISBN code is correct!!\n");
	}
	else if(sum%10 == 0)
	{
		if(((int)*(arr + 12)-(int)'0')== 0)
		printf("The ISBN code is correct!!\n");
	}
	else
	{
		printf("The ISBN code is wrong!!\n");
	}
}

int main()
{
	char input[14];
	int len;
	len = strlen(input);
	for(;;)
	{
		printf("Please input an ISBN code: ");
		scanf("%s",input);
		len = strlen(input);
		if(len == 10)
		{
			check_ISBN10(input);
		}
		if(len == 13)
		{
			check_ISBN13(input);
		}
		if(len != 10 && len != 13)
		{
			printf("Error!");
			break;
		}
	}
}

