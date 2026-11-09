
#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0)
    {
        quotient = dividend / divisor;
        remainder = dividend % divisor;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d", remainder);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}
