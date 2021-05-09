#include <iostream>
using namespace std;

int main() {
  char s[101];
  int N, K;
  cin >> N >> K ;
  for(int i = 1; i <= N ; i++){
  	 cin >> s[i];
     if (i == K){
     	s[i] = s[i]+32;
     }
  }
  s[N+1]=0;
 	cout << s+1 << endl;
  
  return 0;
}

