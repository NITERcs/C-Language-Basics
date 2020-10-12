#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    (age < 18) ? printf ("You are under 18") : printf ("You are 18+");

    return 0;
}
