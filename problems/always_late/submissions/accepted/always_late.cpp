#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, c, d;
    cin >> n >> t >> c >> d;

    int stations[n];
    for (int i = 0; i < n; i++)
        cin >> stations[i];

    int x = (c * d) / (c - t);
    int s = (t * x) / 60;

    for (int i = 1; i < n; i++)
        if (stations[i] > s)
        {
            cout << i << endl;
            return 0;
        }
}
