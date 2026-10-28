#include <stdio.h>

int main(void)
{
    int N, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (0 to 20): ");
    scanf("%d", &N);

    if (N < 0 || N > 20)
    {
        printf("Please enter a number from 0 to 20.\n");
        return 0;
    }

    for (i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }

    printf("%d! = %llu\n", N, factorial);
    return 0;
}
