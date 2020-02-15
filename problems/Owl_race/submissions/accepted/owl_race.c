#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x1, v1, x2, v2;
    scanf("%d", &x1);
    scanf("%d", &v1);
    scanf("%d", &x2);
    scanf("%d", &v2);

    if (v1 == v2)
    {
        if (x1 == x2)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        int t = abs((x2 - x1) / (v1 - v2));
        int eq1 = x1 + v1 * t;
        int eq2 = x2 + v2 * t;
        if (eq1 == eq2)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
