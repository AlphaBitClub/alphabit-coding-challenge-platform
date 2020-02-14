#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int Count = log10(n) + 1;
    int power = pow(10, Count);
    int square;
    for (int i = 0; i < Count; i++)
    {
        power = power / 10;
        square = pow(n / power, 2);
        cout << square;
        n = n % power;
    }
    cout << endl;
    return 0;
}
