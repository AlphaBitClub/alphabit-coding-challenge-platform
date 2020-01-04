#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int x = 1; x < i; x++)
            putchar('0');

        for (int y = i; y <= n; y++)
            putchar('1');

        printf("\n");
    }

    return 0;
}
