#include <iostream>
using namespace std;

int gcd(int m, int n) {
  if (m == 0) return n;
  return gcd(n % m, m);
}

int a[1000];
int cnt[1000];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max_index_value = a[0];
  for (int i = 0; i < n; i++) {
    if (max_index_value < a[i]) {
      max_index_value = a[i];
    }
  }

  int max_count = 2;
  for (int i = 2; i <= max_index_value; i++) {
    cnt[i] = 0;
    for (int j = 0; j < n; j++) {
      if (gcd(i, a[j]) == i) {
        cnt[i]++;
      }
    }
    if (cnt[max_count] < cnt[i]) {
      max_count = i;
    }
  }
  cout << max_count << endl;
  return 0;
}