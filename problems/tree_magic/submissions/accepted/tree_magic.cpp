#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int g;
	cin >> g;
	int64_t r = ((g-1)*(pow(2,g)) + 1);
	cout << fixed << r << endl;
	return 0;
}