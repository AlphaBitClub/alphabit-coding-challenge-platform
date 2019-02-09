#include <stdio.h>

#define P 1000000007

int main(int argc, char const *argv[])
{
    int n;
    // INPUT
    scanf("%d", &n);

    // summation formula
    int s = (n * (n+1) / 2) % P;
    
    // OUTPUT
    printf("%d", s);
    return 0;
}
