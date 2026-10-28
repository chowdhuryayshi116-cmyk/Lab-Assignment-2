#include <stdio.h>

int main(void)
{
    long long number, remainder, reverse = 0;
    int sign = 1;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        sign = -1;
        number = -number;
    }

    while (number > 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    reverse = reverse * sign;
    printf("Reversed number = %lld\n", reverse);
    return 0;
}
