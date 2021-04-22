#include <iostream>
using namespace std;

int main(){
	int n, input = 0, maxinput = 0;
	int sum = 0;
	cin >> n;
	for (int i =0; i < n; i++){
		cin >> input;
		
		sum+=input;
		if(input > maxinput){
			maxinput = input;
		}			
	}
	cout << sum - (maxinput/2) << endl;
	

	return 0;
}

