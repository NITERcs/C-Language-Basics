#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    int sum=0;

    printf("Enter number: ");
    scanf("%d", &number1);
    sum= number1+1;
    printf("%d+1 = %d", number1, sum );
    return 0;
}