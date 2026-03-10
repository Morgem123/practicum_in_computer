#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,n1,n2,n3,n4,t,sum=0;
	printf("N =");
	scanf("%d",&N);
	
	for(n1=1;n1<=N;n1++)
	{
		for(n2=1;n2<=N;n2++)
		{
			for(n3=1;n3<=N;n3++)
			{
				for(n4=1;n4<=N;n4++)
				{
					if(n4>n3 && n3>n2 && n2>n1)
					sum=n1+n2+n3+n4;
					
					if(sum==N)
					t++;
				}
			}
		}
	}

	printf("Total is %d",t);
	return 0;
	
}
