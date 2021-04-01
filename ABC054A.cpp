#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if(a>b && b!=1){
		cout <<	"Alice" << endl; 
	}
	else if (b>a && a!=1){
		cout << "Bob" << endl;
	}
	else if (a==1 && a!=b){
		cout<<"Alice" << endl;
	}
	else if(b==1 && a!=b){
		cout << "Bob"<< endl;
	}
	else{
		cout<< "Draw" << endl;	
	}
	
	return 0;
}

