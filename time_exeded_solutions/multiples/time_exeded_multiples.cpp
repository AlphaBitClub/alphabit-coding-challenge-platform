#include <iostream>

using namespace std;

#define P 1000000007;

int calc_multiples(int x, int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i += x)
    {
        sum = (sum + i) % P;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int x, y, n, s;
    int mx, my, mxy;
    cin >> x >> y;
    cin >> n;

    mx = calc_multiples(x, n);
    my = calc_multiples(y, n);
    mxy = calc_multiples(x * y, n);

    s = (mx + my - mxy) % P;
    cout << s << endl;
    return 0;
}
