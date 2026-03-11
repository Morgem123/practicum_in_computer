#include<stdio.h>
#include<stdlib.h>
int main()
{
char input[11];
int temp,A,B,Y,int1[8],check,i;
while(scanf("%s",input)!=EOF)
{

int code[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
temp=(int)input[0]-(int)'A';
A=code[temp];
for(i=0;i<=8;i++)
int1[i]=(int)input[i+1]-(int)'0';
Y=A/10+A%10*9+int1[0]*8+int1[1]*7+int1[2]*6+int1[3]*5+int1[4]*4+int1[5]*3+int1[6]*2+int1[7]*1;
check=10-(Y%10);
if(int1[8]==check)
printf("身分證字號正確!!\n");

else if(int1[8]==0&&check==10)
printf("身分證字號正確!!\n");

else
printf("身分證字號錯誤!!\n");
}
return 0;

} 

