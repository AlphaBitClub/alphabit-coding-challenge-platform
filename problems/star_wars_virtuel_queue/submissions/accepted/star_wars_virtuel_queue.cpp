#include<iostream>

using namespace std;

int main () {
    int height;
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            if(j==0) {		
                //print 0s 
                for(int t = 0; t < height - i; t++) cout << "0";
            }
            //print 1s
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}