#include <stdio.h>

int main(void)
{
    long long number, remainder;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + (int)remainder;
        number = number / 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
