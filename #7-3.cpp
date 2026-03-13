#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int N,sum=0,Cn=0,Pn=0;
srand(unsigned(time(NULL)));
do
{
N=33;
}while(N<10||N>40);
printf("N=%d\n",N);
for(;;)
 {
  Pn=0;
  Cn=rand()%3+1;
  if(sum%4==1)
 {
 Cn=3;
 }
  else if(sum%4==2)
 {
 Cn=2;
 }
  else if(sum%4==3)
 {
 Cn=1;
 }
  printf("Sum=%d,Computer add:%d\n",sum,Cn);
 sum+=Cn;
  if(sum>=N)
 {
  printf("Computer lose!!");
  return 0;
 }
  printf("Sum=%d,You add:",sum);
  scanf("%d",&Pn);
  sum+=Pn;
  if(sum>=N)
 {
  printf("You lose!!");
  return 0;
 }

}



return 0;
}
