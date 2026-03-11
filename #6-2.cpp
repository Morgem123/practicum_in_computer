#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[11];
	int acode[9];
	printf("請輸入身分證字號:");
	scanf("%s",input);
	int code[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,30,31,33};
	int i,j,Y,m;
	for(i=1;i<=9;i++)
	{
		acode[i-1]=(int)input[i]-(int)'0';	
	}

	j=(int)input[0]-(int)'A';
	printf("%d",j);
	Y=j/10+j%10*9;
	for(m=0;m<=8;m++)
	{
		Y+=acode[m]*(8-m);
	}
	if(acode[8]==10-Y%10)
	printf("身份證字號正確");
	else if(acode[8]==0&&10-Y%10==10) 
	printf("身份證字號正確");
	else
	printf("身份證字號錯誤");
	return 0;
}
	
	
	
	
	
	
	
