#include <stdlib.h>
#include <stdio.h>

static int count = 0;

void towers(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        printf("ring %d: %c -> %c\n", n, from, to);
        count++;
        return;
    }
    towers(n - 1, from, to, aux);
    printf("ring %d: %c -> %c\n", n, from, to);
    count++;
    towers(n - 1, aux, from, to);
}

void DoubleHanoi(int n, char from, char aux, char to)
{
    if (n > 1)
        towers(n - 1, from, to, aux);
    if (n > 0)
    {
        printf("Ring %d: %c -> %c\n", n, from, to);
        count++;
    }
    if (n > 3)
    {
        towers(n - 3, aux, to, from);
    }
    if (n > 2)
    {
        printf("Ring %d: %c -> %c\n", n - 2, aux, to);
        count++;
    }
    if (n > 3)
    {
        DoubleHanoi(n - 3, from, to, aux);
    }

}

int main(void)
{
    int n;
    printf("請輸入A柱中的環個數= ");
    scanf("%d", &n);
    DoubleHanoi(n, 'A', 'B', 'C');
    printf("共需%d個步驟\n", count);
    return 0;
}



