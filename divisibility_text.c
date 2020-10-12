#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Write a program to determine it's divisile by 40 or not
    int num1;
    printf("Enter the number\n");
    scanf("%d", &num1);
    printf("Divisibility test: %d\n", num1%40);
    return 0;
}

