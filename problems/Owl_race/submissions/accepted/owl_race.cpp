#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2)
    {
        if (x1 == x2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        int t = abs((x2 - x1) / (v1 - v2));
        int eq1 = x1 + v1 * t;
        int eq2 = x2 + v2 * t;
        if (eq1 == eq2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
