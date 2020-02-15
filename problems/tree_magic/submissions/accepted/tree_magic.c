#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long long g;
    scanf("%lld", &g);
    long long result = (g - 1) * pow(2, g) + 1;
    printf("%lld", result);
    return 0;
}
