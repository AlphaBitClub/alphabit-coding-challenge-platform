#include <iostream>

using namespace std;

#define P 1000000007;

unsigned long calc_multiples(unsigned long x, unsigned long n)
{
    unsigned long multi_num = n / x;
    unsigned long sum = (multi_num * (multi_num + 1) / 2) % P;
    sum = (sum * x) % P;
    return sum;
}

int main(int argc, char const *argv[])
{
    unsigned long x, y, n, s;
    unsigned long mx, my, mxy;
    cin >> x >> y;
    cin >> n;

    mx = calc_multiples(x, n);
    my = calc_multiples(y, n);
    mxy = calc_multiples(x * y, n);

    s = (mx + my - mxy) % P;
    cout << s << endl;
    return 0;
}
