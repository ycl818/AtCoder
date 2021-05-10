#include <iostream>
#include <cstring>
using namespace std;
char s[101];
char a[101];
char b[101];
int maxcnt = 0;
int main(){
  int N;
  cin >> N;
  cin >> s;
  
  //6
  //aabbca
  //┮Τ舱 癬﹍1 ぶ1舱
  for (int i = 1; i < N; i++){
  	//for group a[0]~ a[i-1] i计
    for (int k = 0; k < i; k++){
    	a[k] = s[k];
    }
    // b眖aЧ秨﹍,N-i b[i]~b[N-i-1]
    for (int k = 0; k < N-i; k++){
    	b[k] = s[k + i];
    }
    //ㄢ皚 a[],b[]Τ瞷筁,Τ瞷碞(êa~z计)1
    int a_exist[128] = {};
		int b_exist[128] = {};
    // mark the items in a[]  Τi计
    for (int j = 0 ; j < i; j++){
    	a_exist[a[j]] = 1;
    }
    // b[]Τ N-i
    for (int j = 0 ; j < N-i; j++){
    	b_exist[b[j]] = 1;
    }
    
    //ゑ耕ㄢ皚 眖ㄢ皚硋耞 琌常Τ1 ㄓ暗璸Ω 
    int tempcnt = 0;
    for (char c = 'a'; c <='z'; c++){
    	if(a_exist[c] == 1 && b_exist[c] == 1){
      	tempcnt++;
      }
    }
    //纗程璸Ω
    if (maxcnt < tempcnt){
    	maxcnt = tempcnt;
    }    
  }
  cout << maxcnt << endl;
 
	return 0;
}
