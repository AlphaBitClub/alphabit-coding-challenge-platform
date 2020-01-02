#include <iostream>

using namespace std;

int main()
{
    int D,S,N;
    cin >> D >> S >> N;

    if (N==0){
        cout << S << endl;
    }else if ((2*D + S) >= N){
        if ((N % 2) == 0){
            cout << (4*D + S)/N << endl;
        }else if((2*D) >= S){
            cout << S << endl;

        }else{
            cout << (4*D + S)/N << endl;
        }
    }else{
        cout << 0 << endl;
    }
        
	return 0;
}