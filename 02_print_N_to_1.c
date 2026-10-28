#include <stdio.h>

int main(void)
{
    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
