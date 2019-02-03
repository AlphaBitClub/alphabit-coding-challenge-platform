#include <iostream>

using namespace std;

int multiplicity(int x, int y)
{
    int count = 0;
    while (x % y == 0)
    {
        x /= y;
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int x;
    long n;
    cin >> n;
    int two = 0, five = 0;
    for (long i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            two += multiplicity(x, 2);
        if (x % 5 == 0)
            five += multiplicity(x, 5);
    }

    cout << (two < five ? two : five) << endl;
    return 0;
}
