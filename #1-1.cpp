#include<stdio.h>
#include<stdlib.h> 

int main()
{
	char id[10],pass[2];
	int test1;
	int test2;
	float sum;
	printf("Please input your name....");
	scanf("%s%*c",id);
	printf("Please select your department....<a:資工 b:電機 c:電子>");
	scanf("%s%*c",pass);
	printf("Please input your score on test1....");
	scanf("%d%*c",&test1);
	printf("Please input your score on test2....");
	scanf("%d%*c",&test2);
	sum = ((float)test1+test2)/2;
	printf("|-------------------------------------------|\n");
	printf("|   Name   |Department|Test 1|Test 2|Average|\n|----------+----------+------+------+-------|\n|%-10s|%s         |    %d|    %d|  %2.2f|\n",id, pass,test1,test2,sum);
	printf("|-------------------------------------------|");
	system("pause");
	return 0;
}   

