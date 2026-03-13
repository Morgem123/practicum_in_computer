#include<stdio.h>
#include<string.h>


int main()
{
	char str1[101],str2[101];
	int ct1=0,n1,n2;
	bool jus=false;
	printf("Please input the string 1:");
	gets(str1);
	n1=strlen(str1);
	printf("Please input the string 2:");
	gets(str2);
	n2=strlen(str2);
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(str2[j]==str1[j+i])
			{
				jus=true;
			}
			else
			{
				jus=false;
				break;
			}
		}
		if(jus==true)
		{
			ct1++;
		}
	}
	
	if(ct1>0&&n1>n2)
	{
		printf("String 2 is a substring of string 1\n");
		printf("Repeat %d times",ct1);
	}
	else
	{
		printf("String 2 is not a substring of string 1");
	}
	return 0;
}


