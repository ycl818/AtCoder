#include <iostream>
using namespace std;

int main() {
	char s[1001];
  cin >> s;
  for(int i = 0; ; i++){
  	 if (s[i] == 0){
      if(s[i-1] != 's'){
      	cout << s << 's' << endl;
      }else{
      	cout << s << "es" << endl;
      } 		
      break;
  	}
  }
 
 
  return 0;
}

