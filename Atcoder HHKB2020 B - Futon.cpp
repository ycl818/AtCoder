#include <iostream>
#include <cstring>
using namespace std;
char s[1000][1001];
int main(){
  int R, C;
  int count = 0;
  cin >> R >> C;
  for(int i =0; i < R; i++){
   cin >> s[i];
  }
  for(int i = 0; i < R ; i++){
  	for(int j = 0; j < C; j++){
    	if (s[i][j] == '.'){
      	if(s[i][j+1] == '.'){
        	count++;
        }
        if(s[i+1][j] == '.'){
        	count++;
        }
      }
    }
  }
  cout << count << endl;
  
  return 0;
}

