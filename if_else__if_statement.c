#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    printf("Enter the value of your number\n");
    scanf("%d", &num1);

if (num1==5)
{
    printf("Your number is equal to 5");
}
else if (num1==10)
{
    printf("Your number is equal to 10");
}
else if (num1==15)
{
    printf("The number is equal to 15");
}
else
{
    printf("The number is not equal to 5,10,15");
}

    return 0;
}
