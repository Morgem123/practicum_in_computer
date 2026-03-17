#include<stdio.h>
#include<string.h>

int main()
{
	char word[2000][20];
	
	FILE*datain1;
	FILE*datain2;
	FILE*dataout;
	datain1=fopen("t10.txt","r");
	datain2=fopen("t11.txt","r");
	dataout=fopen("ta12.txt","w");
	int count=0;
	char temp[20];
	
	if (datain1 != NULL && datain2 != NULL&&dataout!= NULL)
{
	fscanf(datain1, "%s", word);
		count++;
		while ((fscanf(dataopen, "%s", temp))!=EOF)
		{
			for ( i = 0; i < count; i++)
			{
				if (temp[strlen(temp) - 1] == '.' || temp[strlen(temp) - 1] == ',' || temp[strlen(temp) - 1] == '?')
				{
					temp[strlen(temp) - 1] = '\0';
				}
				if (strcmp(temp, word[i]) == 0)
				{
					num[i]++;
					break;
				}
			}
	
}
	fclose(datain1);
	fclose(datain2);
	fclose(dataout);
	return 0;
}
	
 
