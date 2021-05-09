#include <iostream>
using namespace std;

int main() {
  char c;
  cin >> c;
  if (c >= 65 && c <=90){
  	cout << char(65) << endl;
  }else{
  	cout << char(97) << endl;
  }
  return 0;
}

