#include<stdio.h>

int gcd(int n1,int n2)
{
	int max=1;
	for(int i=1;i<=n2;i++)
	{
		if(n2%i==0)
		if(n1%i==0)
		max=i;
	}
	return max;
}

void sort_fraction(int (*ptr)[2],int n)
{
	int temp[2];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			if( (float) **(ptr+1+j) / (*(*(ptr+1+j)+1) ) < (float) * *(ptr+j) / (*(* (ptr+j) +1) ) )
			{
				temp[0]=**(ptr+j);
				temp[1]=*(*(ptr+j)+1);
				**(ptr+j)=**(ptr+1+j);
				*(*(ptr+j)+1)=*(*(ptr+1+j)+1);
				**(ptr+1+j)=temp[0];
				*(*(ptr+1+j)+1)=temp[1];
			}
		}
	}
}

int main()
{
	int n,i;
	printf("Please input a number:");
	scanf("%d",&n);
	int arr[1000][2];
	int count=0;
	for(i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(gcd(i,j)==1)
			{
				arr[count][0]=j;
				arr[count][1]=i;
				count++;
			}
		}
	}
	sort_fraction(arr,count);
	printf("0,");
	for(i=0;i<count;i++)
		printf("%d/%d,",arr[i][0],arr[i][1]);
		printf("1(total number:%d)",count+2);
	return 0;
}
