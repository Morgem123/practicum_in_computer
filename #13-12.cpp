#include<stdio.h>
#include<string.h>

int main()
{
	char word01[2000][20],word02[2000][20],input[20];
	int count,n1=0,n2=0,len,i,j,k,num[2000]={0},sim=0;
	FILE*data01,*data02;
	data01=fopen("t10.txt","r");
	data02=fopen("t11.txt","r");
	
	if(data01!=NULL&&data02!=NULL)
	{
		while(fscanf(data01,"%s",input)==1)
		{
			len=strlen(input);
			if(input[len-1]=='.'||input[len-1]==',')
			input[len-1]='\0';
			for(i=0;i<len;i++)
			{
				if(input[i]>='A'&&input[i]<='Z')
				{
					input[i]=(char)((int)input[i]+32);
				} 
			}
			strcpy(word01[n1],input);
			n1++;
		}
		while(fscanf(data02,"%s",input)==1)
		{
			len=strlen(input);
			if(input[len-1]=='.'||input[len-1]==',')
			input[len-1]='\0';
			for(i=0;i<len;i++)
			{
				if(input[i]>='A'&&input[i]<='Z')
				{
					input[i]=(char)((int)input[i]+32);
				} 
			}
			strcpy(word02[n2],input);
			n2++;
		}
		
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
			{
				count=0;
				while(strcmp(word01[i+count],word02[j+count])==0)
				{
					count++;
					if(i+count>=n1||j+count>=n2)
					break;
				}
				if(count>=7)
					for(k=0;k<count;k++)
						num[i+k]=1;
			}
		}
		
		for(i=0;i<n1;i++)
			sim=sim+num[i];
			printf("%d/%d=%.2f\%%",sim,n1,(float)sim/n1*100);
			
	}
	fclose(data01);
	fclose(data02);
	return 0;
} 
