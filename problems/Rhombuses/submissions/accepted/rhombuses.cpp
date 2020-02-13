#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    printf("%ld\n", n * (n + 1) * (2 * n + 1) / 6);
    return 0;
}
