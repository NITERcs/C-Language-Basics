#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 3;
    printf("The value of 5 to the power 3 is %f\n", pow(5, 3));
    // printf("The value of 5 to the power 3 is %d\n", 5^3); --> this will not reduce 5 to the power 3 because '^' this is a bitwise xor operator
    return 0;
}
