#include <iostream>
using namespace std;
int a[10002];
int b[10002];
int max(int a, int b) {
  if (a > b) return a;
  return b;
}
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }
  // find minimum time spent for a sigle employee did both
  int minEmp = a[1] + b[1];
  for (int i = 1; i <= n; i++) {
    if (minEmp > (a[i] + b[i])) {
      minEmp = a[i] + b[i];
    }
  }

  int minDifferentE = max(a[1], b[2]);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j) continue;
      if (minDifferentE > max(a[i], b[j])) {
        minDifferentE = max(a[i], b[j]);
      }
    }
  }

  if (minDifferentE > minEmp) {
    cout << minEmp << endl;
  } else {
    cout << minDifferentE << endl;
  }

  return 0;
}
