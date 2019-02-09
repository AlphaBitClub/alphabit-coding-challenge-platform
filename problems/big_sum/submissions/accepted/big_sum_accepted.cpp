#include <iostream>

using namespace std;

#define P 1000000007

int main(int argc, char const *argv[])
{
    int n;
    // INPUT
    cin >> n;

    // summation formula
    int s = (n * (n+1) / 2) % P;
    
    // OUTPUT
    cout << s << endl;
    return 0;
}
