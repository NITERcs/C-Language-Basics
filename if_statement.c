#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the value of A\n");
    scanf("%d", &a);

    if (a%2==0){
        printf("%d is even\n", a);
    }
    
    else{
        printf("%d is odd\n", a);
    }
    
    return 0;
}
