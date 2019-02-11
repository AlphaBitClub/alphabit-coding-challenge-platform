#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, t, c, d;
    scanf("%d %d %d %d", &n, &t, &c, &d);

    int stations[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stations[i]);
    }

    int x = (c - t) / (c * d / 60);
    int s = t * x;

    for (int i = 1; i < n; i++)
        if (stations[i] > s)
        {
            printf("%d", i);
            return 0;
        }
}
