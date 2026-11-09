#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }

    do
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    while (number != 0);

    printf("Sum of digits = %d", sum);

    return 0;
}
