#include <stdio.h>
int main()
{
	long year1,year2;
	int month1,month2,day1,day2,count1,count2;
	printf("請輸入西元開始日期(yyyy/mm/dd)為...");
	scanf("%ld%*c%d%*c%d",&year1,&month1,&day1);
	printf("請輸入西元結束日期(yyyy/mm/dd)為...");
	scanf("%ld%*c%d%*c%d",&year2,&month2,&day2);
	
	count1= year1 /4- year1 /100+ year1 /400;
	count2= year2 /4- year2 /100+ year2 /400;
	
	if( year1 %4==0 && year1 %100!=0)
	{
		if(month1<=2&day1<=29)
		{
			count1--;
		}
		else if(month1==1)
		{
			count1--;
		}
    }
    
    if(year1%100==0&&year1%400==0)
	{
		if(month1<=2&day1<=29)
		{
			count1--;
		}
		else if(month1==1)
		{
			count1--;
		}
    }
	if(year2%4==0&&year2%100!=0)
	{
		if(month2<=2&&day2<29)
		{
			count2--;
		}
    }	
		
		if(year2%100==0&&year2%400==0)
	{
		if(month2<=2&&day2<29)
		{
			count2--;
		}
    }
    
	printf("%d",count2-count1);
	return 0;
}




