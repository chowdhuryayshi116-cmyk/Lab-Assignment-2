#include <stdio.h>

int main(void)
{
    int N, i;
    long long sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i = i + 2)
    {
        sum = sum + i;
    }

    printf("Sum of even numbers = %lld\n", sum);
    return 0;
}
