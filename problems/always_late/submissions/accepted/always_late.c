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

    int x = (c * d) / (c - t);
    int s = (t * x) / 60;

    for (int i = 1; i < n; i++)
        if (stations[i] > s)
        {
            printf("%d", i);
            return 0;
        }
}
