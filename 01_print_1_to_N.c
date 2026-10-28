#include <stdio.h>

int main(void)
{
    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
