#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i <= n; i++){
        s += i;
    }
    cout << s << endl;
    return 0;
}
