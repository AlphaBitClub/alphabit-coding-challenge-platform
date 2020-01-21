#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    long n;
    scanf("%ld", &n);
    printf("%ld\n", n * (n + 1) * (2 * n + 1) / 6);
    return 0;
}
