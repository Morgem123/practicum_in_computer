#include<stdio.h>

void sort_fraction(int(*ptr)[2],int n)
{
	int temp,i,k=0,j;
	for(i=k;i<n;i++)
	{
		for(j=k;j<n;j++)
		{
			if(*(*ptr+i) > *(*ptr+j))
			{
				temp = *(*ptr+i);
				*(*ptr+i) = *(*ptr+j);
				*(*ptr+j) = temp;
			}
		}
	k++;
	}
}


int gcd(int i1,int i2)
{
	int sum;
	while(i2!=0)
	{
		sum=i1%i2;
		i1=i2;
		i2=sum;
	}
}


int main()
{
	int num,a;
	printf("Please input a number: ");
	scanf("%d",&num);
	
	int arr[num][num];
	
	a=sort_fraction(arr,*1);
	
}
