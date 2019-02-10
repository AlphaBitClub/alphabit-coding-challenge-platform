#include <stdio.h>

int main(int argc, char const *argv[])
{
    long n;
    // INPUT
    scanf("%ld", &n);

    // summation formula
    long s = n * (n+1) / 2;
    
    // OUTPUT
    printf("%ld", s);
    return 0;
}
