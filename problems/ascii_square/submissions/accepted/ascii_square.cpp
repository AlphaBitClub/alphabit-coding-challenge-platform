#include <iostream>
#include <string>

using namespace std;

int main()
{
	string LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char x;
	cin >> x;

	int x_index = LETTERS.find(x);
	int width = 2 * x_index + 1;

	string line;
	int i_distance, j_distance, c_index;
	char c;

	for (int i = 0; i < width; i++)
	{
		line = "";
		for (int j = 0; j < width; j++)
		{
			i_distance = abs(i - x_index);
			j_distance = abs(j - x_index);
			c_index = max(i_distance, j_distance);
			c = LETTERS[c_index];
			line += c;
		}
		cout << line << endl;
	}
	return 0;
}
