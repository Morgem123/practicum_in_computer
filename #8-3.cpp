#include<stdio.h>

int main()
{
	int i;
	int y,cen,week,total=0;

	printf("Please input the century:");
	scanf("%d",&cen);

	for(y=(cen-1)*100+1;y<=cen*100;y++)
	{
	
		week=(y+(int)((y-1)/4)-(int)((y-1)/100)+(int)((y-1)/400))%7;

		if(y%4!=0||(y%100==0)&&(y%400!=0))
		{
			if(week==0)
			total++;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+28)%7==0)
			total++;
			week+=28;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
		}
		else
		{
			if(week==0)
			total++;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+29)%7==0)
			total++;
			week+=29;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
			
			if((week+31)%7==0)
			total++;
			week+=31;
			
			if((week+30)%7==0)
			total++;
			week+=30;
		}
	}
	
	printf("%d times!!",total);

	return 0;
}

