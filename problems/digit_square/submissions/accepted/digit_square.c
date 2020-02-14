#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int Count = log10(n) + 1;
    int power = pow(10, Count);
    int square;
    for (int i = 0; i < Count; i++)
    {
        power = power / 10;
        square = pow(n / power, 2);
        printf("%d", square);
        n = n % power;
    }
    return 0;
}
