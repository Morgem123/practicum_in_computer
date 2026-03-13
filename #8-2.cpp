#include<stdio.h>
#include<string.h>
unsigned long btod(char *binary, int length)
{
    int i;
    unsigned long decimal = 0;
    unsigned long weight = 1;
    binary = binary + length - 1;
    weight = 1;
    for(i = 0; i < length; ++i, --binary)
    {
        if(*binary == '1')
            decimal = decimal + weight;
        weight *= 2;
    }
    return decimal;
}



int main(void)
{
	int num,c,m,b=0;
	int a[32];
	printf("Please input a decimal number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		c=num%2;
		a[b]=c;
		num=num/2;
		b++;
	}
	
	for(b--;b>=0;b--)
	printf("%d",a[b]);
		
    char binary[65];
    int length;
    unsigned long decimal;
    
	printf("\nPlease input a binary number:");
    scanf("%64s", binary);
    length = strlen(binary);
    decimal = btod(binary, length);
    printf("%lu \n", decimal);
    return 0;
}
