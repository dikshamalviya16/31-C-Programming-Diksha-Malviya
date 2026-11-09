
#include <stdio.h>

int main()
{
    float a, b, division;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (b != 0)
    {
        division = a / b;
        printf("Division = %.2f", division);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}
