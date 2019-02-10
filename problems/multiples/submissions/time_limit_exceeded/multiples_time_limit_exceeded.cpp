#include <iostream>

using namespace std;

long calc_multiples(long x, long n)
{
    long sum = 0;
    for (long i = 0; i <= n; i += x)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    long x, y, n, s;
    long mx, my, mxy;
    cin >> x >> y;
    cin >> n;

    mx = calc_multiples(x, n);
    my = calc_multiples(y, n);
    mxy = calc_multiples(x * y, n);

    s = mx + my - mxy;
    cout << s << endl;
    return 0;
}
