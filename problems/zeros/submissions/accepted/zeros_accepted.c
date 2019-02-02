#include <stdio.h>

int multiplicity(int x, int y)
{
    int count = 0;
    while (x % y == 0)
    {
        x /= y;
        count++;
    }
    return count;
}

int main()
{
    int x;
    long n;
    scanf("%ld", &n);
    int two = 0, five = 0;
    for (long i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            two += multiplicity(x, 2);
        if (x % 5 == 0)
            five += multiplicity(x, 5);
    }

    printf("%d", two < five ? two : five);
    return 0;
}
