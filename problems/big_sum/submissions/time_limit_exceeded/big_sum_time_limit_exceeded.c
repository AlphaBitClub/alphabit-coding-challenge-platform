#include <stdio.h>

int main(int argc, char const *argv[])
{
    long n;
    scanf("%ld", &n);
    long s = 0;
    for (long i = 0; i <= n; i++){
        s += i;
    }
    printf("%ld", s);
    return 0;
}
