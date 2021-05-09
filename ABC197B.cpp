#include <iostream>
using namespace std;
char s[101][101];
int main() {
  int R, C, X, Y;
  int cnt = 1;
  cin >> R >> C >> X >> Y;
  X-=1;
  Y-=1;
  for (int i = 0; i < R ; i++){
  	cin >> s[i];
  }
  
  //cout << s[X][Y] << endl;
  //up 
  for(int i = X; i >=0 ; i--){
  	if(s[i][Y] != '#'){
    	cnt++;
    }else break;	
  }
  //down
  for(int i = X; i <R; i++){
  	if(s[i][Y] != '#'){
    	cnt++;
    }else break;
  }
  //right
  for(int i= Y; i < C; i++){
  	if(s[X][i] != '#'){
    	cnt++;
    }else break;
  }
  //left
  for(int i = Y; i >= 0; i--){
  	if(s[X][i] != '#'){
    	cnt++;
    }else break;
  }
  cout << cnt-4 << endl;
  return 0;
}
