#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    long n;
    scanf("%ld", &n);
    long result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += pow(i, 2);
    }

    printf("%ld\n", result);
    return 0;
}
