#include <iostream>
using namespace std;

int main(){
	int n, c, t, T;

	int c_min = 1001;
	cin >> n >> T;
	
	for(int i=0; i < n ; i++){
		cin >> c >> t;
		
		if(c_min> c && t <=T){
			c_min = c;
	}
	}
	if(c_min ==1001){
		cout << "TLE" <<endl;
	}else{
		cout << c_min << endl;	
	}
	return 0;
}

