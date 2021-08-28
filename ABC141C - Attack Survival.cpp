#include <iostream>
using namespace std;
const int SIZE = 1000000;
int cnt[SIZE + 1]; 


int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  for (int i = 0; i < Q; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  
  for (int i = 1; i <= N; i++) {   
    if ((K - (Q - cnt[i])) > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
