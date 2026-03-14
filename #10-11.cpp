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
int n, now, number, p, num[100];
printf("請輸入整數的個數: ");
scanf("%d",&n);
for(now = 1; now <= n; now++)
{
printf("請輸入第 %d 個數: ",now);
scanf("%d",&number);
*(num+now-1) = number;
}
sort(num,n);
printf("排序結果: ");
for(p = 0; p < n; p++)
{
printf("%d ",*(num+p));
}
}

