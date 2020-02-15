#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int mountains[8];
	string result = "";
	bool lost = false;
	int altitude = 9;

	for(int i=0;i<8;i++){
		cin >> mountains[i];
	}
	for(int i=0;i<8;i++){
		int index_max =max_element(mountains,mountains+8)-mountains;

		result += to_string(index_max+1) +" ";

		if(mountains[index_max] > altitude){
			lost = true;
        	break;
		}

		mountains[index_max] = 0;
		altitude -= 1;

	}
	if(lost){
		cout << "Hogwarts is down" << endl;
	}else{
		cout << result << endl;
	}

	return 0;
}