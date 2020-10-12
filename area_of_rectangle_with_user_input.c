#include<stdio.h>

int main(int argc, char const *argv[])
{
    int length, breadth;
    printf("Enter the value of length\n");
    scanf("%d", &length);
    printf("Enter the value of breadth\n");
    scanf("%d", &breadth); 
    printf("The area of ypur rectangle is %d", length*breadth);   
    return 0;
}
