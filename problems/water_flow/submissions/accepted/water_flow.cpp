#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
	float flow ;
	int i,n_valves;

	cin >> flow;
	cin >> n_valves;

	int valves_bandwidth[n_valves];
	int delays[n_valves];

	for(i=0;i<n_valves;i++){
		cin >> valves_bandwidth[i];
	}
	
	float results[n_valves];
	delays[0]=0;
	results[0]=(flow/valves_bandwidth[0])+delays[0];

	for(i=1;i<n_valves;i++){
		// calculating the delays
		cin >> delays[i];
		delays[i] += delays[i-1];
		// calculate the needed time
		results[i]=(flow/valves_bandwidth[i])+delays[i];	
	}	

	int the_valve;
	the_valve = min_element(results, results + n_valves)-results+1;
	
	cout << the_valve;

	return 0;
}