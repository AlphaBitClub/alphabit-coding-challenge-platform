#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cin >> number;
    if (number % 2 == 0 && number != 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
