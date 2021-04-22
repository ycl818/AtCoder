#include <iostream>
using namespace std;

int main(){
	int r, D, x;
	int out; 
	cin >> r >> D >> x;
	
	out = r * x - D ;
	cout << out << endl; 
	for(int i = 0; i < 9; i++){
		
		out = (out * r - D);
		cout << out << endl;
	} 
	return 0;
}

