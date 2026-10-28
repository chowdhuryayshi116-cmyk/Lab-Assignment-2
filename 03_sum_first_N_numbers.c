#include <stdio.h>

int main(void)
{
    int N, i;
    long long sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}
