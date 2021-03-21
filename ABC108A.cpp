#include <iostream>
using namespace std;
int main(){
 
	int N;
  	cin >> N;
  	//N /2  => 11/2 = 5 
    //       => 6/2 =3
  	// even * odd		
  	cout << (N/2)*(N-(N/2));
 
	return 0;
}
