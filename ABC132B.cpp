#include <iostream>
using namespace std;

int a[22]; 
int main(){
	int n, p, count = 0 ;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> p;
		a[i] = p;
	}
	for (int i = 2; i < n; i++){
	
		if (a[i]> a[i-1] && a[i]< a[i+1] ||
		    a[i]<a[i-1] && a[i]> a[i+1]){
			count ++;
		}	
	}
	cout << count << endl;
	return 0;
}

