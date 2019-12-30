#include <iostream>

using namespace std;

int main()
{
    int D,S,N;
    cin >> D >> S >> N;

    if (N==0){
        cout << S;
    }else if ((2*D + S) >= N){
        if ((N % 2) == 0){
            cout << (4*D + S)/N;
        }else if((2*D) >= S){
            cout << S;

        }else{
            cout << (4*D + S)/N;
        }
    }else{
        cout << 0;
    }
	
	return 0;
}