#include<stdlib.h>
#include<stdio.h>
void sort(int *arr, int n)
{
	int temp, k=0, i,j;
	for(i=k;i<n;i++)
	{
		for(j=k;j<n;j++)
		{
			if(*(arr+i) > *(arr+j))
			{
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	k++;
}
}


int main()
{
	int a,b,num[11];
	printf("請輸入整數的個數:");
	scanf("%d",&a);

	for(b=1;b<=a;b++)
	{
		printf("請輸入第%d個數:",b);
		scanf("%d",&num[b]);		
	}
	*(num+now-1) = number;
}
sort(num,n);
printf("排序結果: ");
for(p = 0; p < n; p++)
{
printf("%d ",*(num+p));
}
}
	return 0;
}
