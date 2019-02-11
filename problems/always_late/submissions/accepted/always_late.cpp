#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, c, d;
    cin >> n >> t >> c >> d;

    int stations[n];
    for (int i = 0; i < n; i++)
        cin >> stations[i];

    int x = (c - t) / (c * d / 60);
    int s = t * x;

    for (int i = 1; i < n; i++)
        if (stations[i] > s)
        {
            cout << i << endl;
            return 0;
        }
}
