#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1,n2,i,sum;
	char choice;
	sum=0;

	do
	{
		sum=0;
		printf("Number1:");
		scanf("%d",&n1);
		printf("Number2:");
		scanf("%d",&n2);
	
		if (n1>n2)
		{
			printf("Error!!Number1>Number2!!");
			choice='a';
		}
		else
		{
			choice='b';
	
			while (n2>=n1)
			{
				i=n1;
				sum=sum+i;
				n1++;
			}
			
			printf("Sum=%d",sum);
			
		}
		
		if(choice!='a')
		{
			printf("\nAgain(Y/N)??");
			scanf("%*c%c",&choice);
		}
		
		
		if(choice=='a')
		printf("\n");

	}while ( choice == 'Y' || choice == 'y'||choice=='a' );

return 0;
}
