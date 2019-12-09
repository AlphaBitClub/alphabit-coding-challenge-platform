#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, S, D;
    scanf("%d", &D);
    scanf("%d", &S);
    scanf("%d", &N);

    if (N == 1)
    {
        printf("%d", S);
    }
    else if ((2 * D + S) >= N)
    {
        if ((N % 2) == 0)
        {
            printf("%d", (4 * D + S) / N);
        }
        else
        {
            if ((2 * D) >= S)
            {
                printf("%d", S);
            }
            else
            {
                printf("%d", (4 * D + S) / N);
            }
        }
    }
    else
    {
        printf(0);
    }

    return 0;
}
