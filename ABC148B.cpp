#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char S[101];
  char T[101];
  int  N;
  cin >> N >> S >> T ;
  for (int i = 0; i <N ; i++){
  	cout << S[i] << T[i];
  }
  
  return 0;
}

