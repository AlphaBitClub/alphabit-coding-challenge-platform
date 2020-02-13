#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    long result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += pow(i, 2);
    }

    cout << result << endl;
    return 0;
}
