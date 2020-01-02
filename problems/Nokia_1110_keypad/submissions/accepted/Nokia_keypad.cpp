#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	char LETTERS[8][4] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        {'j', 'k', 'l'},
        {'m', 'n', 'o'},
        {'p', 'q', 'r', 's'},
        {'t', 'u', 'v'},
        {'w', 'x', 'y', 'z'}};
	
	int n;
    cin >> n;

    int current, length, lw, position;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == 0)
            cout << " ";
        else
        {
            position = current % 10 - 2;
            length = (position == 5 || position == 7) + 3;
            lw = to_string(current).length();
            cout << LETTERS[position][(lw-1) % length];
        }
    }
	cout << endl;
	return 0;
}