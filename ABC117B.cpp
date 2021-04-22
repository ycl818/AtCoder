#include <iostream>
using namespace std;

int main(){
	int max=0, N, sum=0;
	int length[11];
	int input;
	cin >> N;
	
	for(int i =0 ; i< N ; i++){
		cin >> input;
		length[i] = input;
		
		sum+=input;
		
		if(max < input){
			max = input;
		}
		
	}
	if(max < sum-max){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}

