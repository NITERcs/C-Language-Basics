#include <stdio.h>

int main(int argc, char const *argv[])
{
    int principal = 1000, rate = 5, years= 10; 
    int simple_interest;
    
    simple_interest = (principal*rate*years)/100;
    printf(" The value of simple interest is %d", simple_interest);
    return 0;
}
