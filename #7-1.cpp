#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,j,k,list[100][2];
	int x=0,y,max=0;
	char string[101];
	
	printf("請輸入一個字串:");
	scanf("%s",string);
	
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			for(k=0;k<=(j-i)/2;)
			{
				if(string[i+k]!=string[j-k])
				{
					break;
				}
				k++;
				
				if(k>(j-i)/2)
				{
					list[x][0]=i;
					list[x][1]=j;
					x++;
				}
				
			}
		}
	}
	
	for(y=0;y<x;y++)
	{
		if((list[y][1]-list[y][0])>max)
		
		max=(list[y][1]-list[y][0]);
	}
	
	printf("最長迴文為:");
	for(y=0;y<x;y++)
	{
		if((list[y][1]-list[y][0])==max)
		{
			j=list[y][0];
			
			for(i=0;i<=max;i++)
			{
				printf("%c",string[j+i]);
			}
			printf(",");
		}
	}
	
	return 0;
} 
