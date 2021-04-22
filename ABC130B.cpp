#include <iostream>
using namespace std;

int main(){
	int N , X, L;
	int c=0; // coordinate
	int count=1;
	cin >> N >> X;
	
	for (int i = 1; i < N + 1; i++){
		cin >> L;
		c += L;	
		if(X>=c){
			count++;
		}					 
	}
	cout << count << endl;
	return 0;
}

