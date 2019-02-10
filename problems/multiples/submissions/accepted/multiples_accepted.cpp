#include <iostream>

using namespace std;

long calc_multiples(long x, long n)
{
    long multi_num = n / x;
    long sum = multi_num * (multi_num + 1) / 2;
    sum = sum * x;
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
