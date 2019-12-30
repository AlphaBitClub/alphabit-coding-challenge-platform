#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp> 
#include <vector>

using namespace std;

int main()
{
    // getting the line
    string line;
    getline(cin, line);
    
    //the splited  line 
    vector<string> oneDim_v; 
    boost::split(oneDim_v, line, boost::is_any_of(" ")); 
    
    //the int array 
    int oneDim[oneDim_v.size()];
    for (int i = 0; i < oneDim_v.size(); i++) 
        oneDim[i] =  stoi(oneDim_v[i]);

    int n,m,i,j;
    cin >> n >> m >> i >> j;

    cout << oneDim[i*m+j];
    return 0;
}