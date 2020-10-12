#include <stdio.h>

int main(int argc, char const *argv[])
{
    int radius = 3;
    float pi = 3.1416;
    int hight = 4;
    printf("The area of a circle is %f\n ", pi*radius*radius);
    printf("The area of a cylinder is %f\n", pi*radius*radius*hight);

    
    return 0;
}
