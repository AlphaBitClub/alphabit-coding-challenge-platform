#include <iostream>
#include <string>
#include <deque> 
#include <ctype.h>

using namespace std;

void showdq(deque <int> g,string s,deque <int> :: iterator it) 
{	
	if(g.size()){
		if(s.compare("ALL")==0){ 
    		for (it = g.begin(); it != g.end(); ++it) 
        		cout << *it << " "; 
			cout << endl;
		}else if(s.compare("FIRST")==0){
			cout << g.at(0)<< endl;
		}
    	else
		{
			cout << *g.rbegin()<<endl;
		}
	}else
	{
		cout << 0 <<endl;
	}	 
}

int main()
{
	int ticket_number = 0;
	int n_of_commands;
	cin >> n_of_commands;

	string commands[n_of_commands];
	for(int i=0;i<n_of_commands;i++){
		cin >> commands[i];
		if(commands[i].compare("CANCEL")==0 || commands[i].compare("SHOW")==0)
			i--;
	}

	deque <int>queue;
	deque <int> :: iterator it;

	for(int i=0;i<n_of_commands;i++){
		if(commands[i].compare("NEW")==0){
			ticket_number++;
			queue.push_back(ticket_number);
		}
		else if(!isalpha(commands[i][0])){
			it =queue.begin()+stoi(commands[i]);
			queue.erase(it); 
		}
		else if(commands[i].compare("NEXT")==0){
			if(queue.size())
				queue.pop_front();
		}
		else{
			showdq(queue,commands[i],it);
		}		
	}

	return 0;
}