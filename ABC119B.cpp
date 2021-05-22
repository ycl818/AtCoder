#include <iostream>
using namespace std;
int main() {
  int N;
  double tol = 0;
  double x;
  string u;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> x >> u;
    if (u == "JPY") {
      tol += x;
    } else {
      tol += x * 380000.0;
    }
  }
  // 1 bitcoin 380000.0
  cout << tol << endl;

  return 0;
}