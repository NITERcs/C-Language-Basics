#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    int freedom_fighter_qouta = 0;
    freedom_fighter_qouta = 17;
    printf("Enter the age:\n");
    scanf("%d", &age);
    if ((age<=90 && age>=18) || (freedom_fighter_qouta == 17))
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }

    if (age==50)
    {
        printf("Half century\n");
    }
    else
    {
        printf("Your age is %d\n", age);
    }
    if (age>=100)
    {
        printf("BTW! You should stop driving and take care of yourself!\n");
    }
    else
    {
        printf("See you next time, Happy driving\n");
    }
    
    
    
    
    return 0; 
}
