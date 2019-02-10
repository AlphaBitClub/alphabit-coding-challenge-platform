#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    long s = 0;
    for (long i = 0; i <= n; i++){
        s += i;
    }
    cout << s << endl;
    return 0;
}
