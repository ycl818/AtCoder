#include <iostream>
#include <cstring>
using namespace std;
char s[101];
char t[101];
int main() {
  cin >> s >> t;
  
  int len = strlen(s);
  bool answer = 0;
  for(int i = 0; i < len; i++){
  	char temptail = s[len-1];
    for (int j = len-1; j > 0 ; j--){
    	s[j] = s[j - 1];
    }
    s[0] = temptail;
    
    if(strcmp(s,t) == 0){
    	answer = 1;	
  	}
  }
    if(answer == 1){
    	cout << "Yes" << endl;
    }else{
    	cout << "No" << endl;
    }
  return 0;
}


