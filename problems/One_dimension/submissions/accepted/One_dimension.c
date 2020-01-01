#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int n, m, k, l, count;
    scanf("%d", &count);
    int oneDim[count];
    for (int i = 0; i < count; i++)
        scanf("%d", &oneDim[i]);

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    scanf("%d", &l);
    int matrixResult = k * m + l;
    printf("%d", oneDim[matrixResult]);
    return 0;
}
