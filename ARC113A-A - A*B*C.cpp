#include <iostream>
using namespace std;
// O nlogn
void solve() {
  int K;
  cin >> K;
  long long ans = 0;
  for (int i = 1; i <= K ; i++) {
    for (int j = 1; i * j <= K; j++) {
      ans += K / (long long)(i * j);
    }
  }
  cout << ans << endl;
}
int main() {
  solve();
  return 0;
}
