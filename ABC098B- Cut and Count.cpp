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
  //�Ҧ��զX �_�l��1 �]���ܤ�1�Ӧb�@��
  for (int i = 1; i < N; i++){
  	//for group a[0]~ a[i-1] ��i�Ӽ�
    for (int k = 0; k < i; k++){
    	a[k] = s[k];
    }
    // b�qa�񧹫�}�l��,��N-i�� b[i]~b[N-i-1]
    for (int k = 0; k < N-i; k++){
    	b[k] = s[k + i];
    }
    //�ŧi��}�C �s��a[],b[]���X�{�L����,���X�{�N�b(���ӭ�a~z�Ȫ����)�s1
    int a_exist[128] = {};
		int b_exist[128] = {};
    // mark the items in a[]  ��i�Ӽ�
    for (int j = 0 ; j < i; j++){
    	a_exist[a[j]] = 1;
    }
    // b[]�� N-i��
    for (int j = 0 ; j < N-i; j++){
    	b_exist[b[j]] = 1;
    }
    
    //�����}�C �q��}�C�v�@�P�_ �O�_����1 �Ӱ��p�� 
    int tempcnt = 0;
    for (char c = 'a'; c <='z'; c++){
    	if(a_exist[c] == 1 && b_exist[c] == 1){
      	tempcnt++;
      }
    }
    //�x�s�̤j�p��
    if (maxcnt < tempcnt){
    	maxcnt = tempcnt;
    }    
  }
  cout << maxcnt << endl;
 
	return 0;
}
