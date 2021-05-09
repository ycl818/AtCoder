#include <iostream>
#include <cstring>
using namespace std;
char s[101][101];
int main() {
  int N;
  int cnt = 0;
  cin >> N;
  for(int i=0; i<N ;i++){
  	cin >> s[i];
  }
	//cout << strlen(s[0]) << endl;
	for(int i = 0; i < N-1; i++){
  	int len = strlen(s[i]) - 1;
    if(s[i][len] == s[i+1][0]){
    	cnt++;
    }
  }
  
  for(int i = 0; i < N; i++){
  	for(int j = i+1; j< N; j++){
    	if(strcmp(s[i],s[j]) == 0){
      	cout << "No" << endl;
   			return 0;     
      }
    }
  }
  
  if(cnt != N-1){
  	cout << "No" << endl;
  }else{
  	cout << "Yes" << endl;
  }

  return 0;
}
