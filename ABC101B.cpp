#include <iostream>
using namespace std;

int main(){
	int s;
	cin >> s;
	int sum;
	int x;
	x =s;
	while(s > 0){
		sum += s%10;
		s/=10;
	}
	if (x%sum == 0){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}

