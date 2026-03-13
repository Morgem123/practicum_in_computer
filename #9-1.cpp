#include <stdio.h>
#include <conio.h>

void towers(int, char, char, char);
static int count=1;
int main()
{
   int n;
   printf("請輸入A柱中的環個數: ");
   scanf("%d", &n);
   
   towers(n, 'A', 'C', 'B');
   printf("\n共需%d個步驟",count);
   
   return 0;
}

void towers(int no, char source, char destination, char spare)
{
   if (no == 1)
    {
        printf("\nring 1 : %c => %c", source, destination);
        
		return;
    }


    towers(no - 1, source, spare, destination);
	printf("\nring %d : %c => %c", no, source, destination);
	count++;
	
    towers(no - 1, spare, destination, source);
    count++;
   

}


