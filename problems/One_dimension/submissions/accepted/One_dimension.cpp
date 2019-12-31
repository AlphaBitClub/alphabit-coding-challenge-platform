#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp> 
#include <vector>

using namespace std;

int main()
{
    int length;
    cin >> length;

    int oneDim[length];
    for(int i=0;i<length;i++)
        cin >> oneDim[i];
    
    int n,m,i,j;
    cin >> n >> m >> i >> j;

    cout << oneDim[i*m+j];
    return 0;
}