#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, next, i = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;

        i++;
    }

    return 0;
}
