#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int num,i,j,k,l,sum=0,a,b,c,d;
		long long mini = 1000000;
		printf("請輸入乘客總人數:");
		scanf("%d",&num);
		
		for(i=0;i<=num/4;i++)
			for(j=0;j<=num/7;j++)
				for(k=0;k<=num/13;k++)
					for(l=0;l<=num/16;l++)
					{
						sum = 0;
						if(i*4+7*j+13*k+16*l >= num)
						{
							sum = sum + 2500 * i + 3800 * j + 6400 * k + 7500 * l;
							if(sum<=mini)
							{
							a = i;
							b = j;
							c = k;
							d = l;	
							mini = sum;
							}
							
							
						}
							
						
					}	
		printf("最少需要 %d 元\n",mini);
		printf("四門房車 %d 台\n",a);
		printf("商務休旅車 %d 台\n",b);
		printf("小型巴士 %d 台\n",c);
		printf("中型巴士 %d 台\n",d);
		
		return 0;
	}


