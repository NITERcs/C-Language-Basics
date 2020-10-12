#include<stdio.h>


int main(int argc, char const *argv[])
{
    int x =2 , y = 3, z = 3, k = 1;
    int result =  3 * x / y - z + k;
    // calculated by following the order of priority
    // first priority *,/,%
    // second priority +,_
    // third priority =
    // *,/ follows left to right accociativity
    printf("The value of result is %d\n", result);
    
    return 0;
}
